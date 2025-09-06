// CUploadWorkLog.cpp : implementation file
//

#include "pch.h"
#include "WebCloudAPITest.h"
#include "CUploadWorkLog.h"
#include "afxdialogex.h"
#include <Ctime>
#include<string>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <GdiPlus.h>
#include <wincrypt.h>
#pragma comment(lib, "crypt32.lib") // Add this line

#pragma comment(lib, "GdiPlus.lib")

using namespace Gdiplus;


// CUploadWorkLog dialog

IMPLEMENT_DYNAMIC(CUploadWorkLog, CDialogEx)
HWND hButton, hStatic;
HBITMAP hScreenshot = NULL;


void CUploadWorkLog::DoDataExchange(CDataExchange* pDX)
{
    CDialogEx::DoDataExchange(pDX);


    DDX_Text(pDX, IDC_SEOSETTINGS, m_MessageText);

    DDX_Text(pDX, IDC_EDIT1, m_exename);
    DDX_Text(pDX, IDC_EDIT7, m_windowtitle);
    DDX_Text(pDX, IDC_EDIT2, memotitle);
    DDX_Text(pDX, IDC_EDIT4, m_memodescription);
    DDX_CBString(pDX, IDC_COMBO1, CompletionPercentage);
    DDX_Control(pDX, IDC_SHOW, m_screenshot);
}


BEGIN_MESSAGE_MAP(CUploadWorkLog, CDialogEx)

    ON_BN_CLICKED(IDC_BUTTON1, &CUploadWorkLog::OnBnClickedUpload)
    ON_BN_CLICKED(IDC_BUTTON3, &CUploadWorkLog::OnBnClickedTakeScreenshots)
    ON_BN_CLICKED(IDC_BUTTON2, &CUploadWorkLog::OnBnClickedClose)
END_MESSAGE_MAP()

CUploadWorkLog::CUploadWorkLog(CWnd* pParent /*=nullptr*/)
    : CDialogEx(IDD_DIALOG_UPLOADWORKLOG, pParent)

    , m_MessageText(_T(""))
    , m_exename(_T(""))
    , m_windowtitle(_T(""))
    , memotitle(_T(""))
    , m_memodescription(_T(""))
    , CompletionPercentage(_T(""))
    , m_screenshotBase64(_T("")) 

{
    m_TTService = nullptr;
}


CString CaptureTime()
{
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert the time to a string format
    char timeStr[100];
    struct tm timeStruct;
    localtime_s(&timeStruct, &currentTime); // Use localtime_s
    std::strftime(timeStr, sizeof(timeStr), "CaptureTime::%I:%M:%S %p", &timeStruct);

    // Convert the char array to a CString
    CString result(timeStr);

    return result;
}
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid) {
    UINT num = 0;           // number of image encoders
    UINT size = 0;          // size of the image encoder array in bytes

    ImageCodecInfo* pImageCodecInfo = NULL;

    GetImageEncodersSize(&num, &size);
    if (size == 0)
        return -1;  // Failure

    pImageCodecInfo = (ImageCodecInfo*)(malloc(size));
    if (pImageCodecInfo == NULL)
        return -1;  // Failure

    GetImageEncoders(num, size, pImageCodecInfo);

    for (UINT j = 0; j < num; ++j) {
        if (_wcsicmp(pImageCodecInfo[j].MimeType, format) == 0) {
            *pClsid = pImageCodecInfo[j].Clsid;
            free(pImageCodecInfo);
            return j;  // Success
        }
    }

    free(pImageCodecInfo);
    return -1;  // Failure
}
void TakeAndSaveScreenshot(const wchar_t* filePath)
{
    GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR gdiplusToken;
    GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

    // Set the desired screenshot dimensions
    int captureWidth = 640;
    int captureHeight = 480;

    // Create a bitmap to capture the scaled screen
    HDC screenDC = GetDC(NULL);
    HDC memDC = CreateCompatibleDC(screenDC);
    HBITMAP screenshotBitmap = CreateCompatibleBitmap(screenDC, captureWidth, captureHeight);
    SelectObject(memDC, screenshotBitmap);

    int captureX = 640; // X coordinate of the capture area
    int captureY = 480; // Y coordinate of the capture area
    BitBlt(memDC, 0, 0, captureWidth, captureHeight, screenDC, captureX, captureY, SRCCOPY);

    // Save the screenshot
    Bitmap* screenshot = new Bitmap(screenshotBitmap, NULL);
    CLSID pngClsid;
    GetEncoderClsid(L"image/png", &pngClsid);
    screenshot->Save(filePath, &pngClsid, NULL);

    // Clean up
    delete screenshot;
    DeleteObject(screenshotBitmap);
    DeleteDC(memDC);
    ReleaseDC(NULL, screenDC);

    // Shutdown GDI+
    GdiplusShutdown(gdiplusToken);
}

void CUploadWorkLog::OnBnClickedTakeScreenshots()
{
    CString captureTime = CaptureTime();
    m_MessageText = captureTime;
    UpdateData(FALSE);

    CImage image;
    HDC screenDC = ::GetDC(NULL);
    if (screenDC)
    {
        CRect screenRect;
        ::GetWindowRect(::GetDesktopWindow(), &screenRect);

        CDC memDC;
        memDC.CreateCompatibleDC(CDC::FromHandle(screenDC));

        CBitmap bitmap;
        bitmap.CreateCompatibleBitmap(CDC::FromHandle(screenDC), screenRect.Width(), screenRect.Height());

        CBitmap* pOldBitmap = memDC.SelectObject(&bitmap);
        memDC.BitBlt(0, 0, screenRect.Width(), screenRect.Height(), CDC::FromHandle(screenDC), 0, 0, SRCCOPY);

        HBITMAP hBitmap = static_cast<HBITMAP>(bitmap.Detach());
        image.Attach(hBitmap);

        memDC.SelectObject(pOldBitmap);

        ::ReleaseDC(NULL, screenDC);

        // Convert the screenshot to a base64 string
        IStream* pStream = nullptr;
        CreateStreamOnHGlobal(nullptr, TRUE, &pStream);
        if (pStream)
        {
            image.Save(pStream, Gdiplus::ImageFormatPNG);
            HGLOBAL hGlobal = nullptr;
            GetHGlobalFromStream(pStream, &hGlobal);
            if (hGlobal)
            {
                void* pBuffer = GlobalLock(hGlobal);
                if (pBuffer)
                {
                    DWORD bufferSize = GlobalSize(hGlobal);
                    std::vector<BYTE> imageData(bufferSize);
                    memcpy(imageData.data(), pBuffer, bufferSize);
                    GlobalUnlock(hGlobal);

                    // Encode the image data to base64
                    DWORD base64Size = 0;
                    CryptBinaryToStringA(imageData.data(), bufferSize, CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, nullptr, &base64Size);
                    std::vector<CHAR> base64Data(base64Size);
                    CryptBinaryToStringA(imageData.data(), bufferSize, CRYPT_STRING_BASE64 | CRYPT_STRING_NOCRLF, base64Data.data(), &base64Size);

                    m_screenshotBase64 = CString(base64Data.data());
                }
            }
            pStream->Release();
        }

        // Display the screenshot in the picture box
        CWnd* pPictureBox = GetDlgItem(IDC_SHOW);
        if (pPictureBox)
        {
            CRect rect;
            pPictureBox->GetClientRect(&rect);

            CDC* pDC = pPictureBox->GetDC();
            if (pDC)
            {
                image.StretchBlt(pDC->m_hDC, rect, SRCCOPY);
                pPictureBox->ReleaseDC(pDC);
            }
        }
    }

    CWebCloudAPITestApp::SetResponseMsg(L"ScreenShot Captured");
}


void CUploadWorkLog::CaptureWorkActivity()
{
  

    
}

CUploadWorkLog::~CUploadWorkLog()
{

}




// CUploadWorkLog message handlers

void CUploadWorkLog::OnBnClickedUpload()

{
    UpdateData(TRUE); // Transfer data from controls to variables

    CString UserID = _T("admin");

    WorkDairyDataResp response;
    WorkDairyDataReq workdairyreq;
    workdairyreq.WorkDairyData.MemoDetails.MemoTitle = memotitle; // Use the variable
    workdairyreq.WorkDairyData.MemoDetails.MemoDesc = m_memodescription;
    workdairyreq.WorkDairyData.MemoDetails.CompletionPercentage = CompletionPercentage;
    workdairyreq.WorkDairyData.MemoDetails.BugServerDetails = _T("null");
    workdairyreq.AdditionalParms = _T("null");
    workdairyreq.WorkDairyData.CaptureTime = CaptureTime();
    workdairyreq.WorkDairyData.CurrentActiveAppDetails.ApplicationExeName = m_exename;
    workdairyreq.WorkDairyData.CurrentActiveAppDetails.ApplicationWindowTitle = m_windowtitle;
    workdairyreq.WorkDairyData.CurrentActiveAppDetails.ActiveAppScreenShot = m_screenshotBase64;
    workdairyreq.WorkDairyData.IsOfflineTime = false;
    workdairyreq.WorkDairyData.IsUploaded = false;
    workdairyreq.WorkDairyData.UploadedServerURLList = _T("0");
    workdairyreq.WorkDairyData.UserName = UserID;
    workdairyreq.WorkDairyData.CameraImage = _T("null");

    m_TTService->UploadWorkDairy(UserID, workdairyreq, response);
    CWebCloudAPITestApp::SetResponseMsg(L"Uploaded Successfull");

}



void CUploadWorkLog::OnEnChangeEdit5()
{

}

void CUploadWorkLog::OnBnClickedClose()
{
    CDialogEx::OnCancel();

}






