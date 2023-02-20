#include "Leventure_DevelopKey.h"
BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam)
{
    Q_UNUSED(lParam);

    char windowTitle[256];
    GetWindowTextA(hwnd, windowTitle, sizeof(windowTitle));
    if (strlen(windowTitle) > 0) {
        QString title = QString::fromLocal8Bit(windowTitle);
        Leventure_DevelopKey::Singleton()->InsertWindowsTitle(title);
    }
    return TRUE;
}

Leventure_DevelopKey::Leventure_DevelopKey(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->show();
    lab_welcome_rolling();
    QtConcurrent::run([=]() {
        //需要异步处理这个当前窗口的获取
        this->InitFindWindows();
        });
    //qDebug() << connect(this, &Leventure_DevelopKey::Sig_Titles, this, &Leventure_DevelopKey::InsertWindowsTitle, Qt::QueuedConnection);
    //this->InitFindWindows();
}

Leventure_DevelopKey::~Leventure_DevelopKey()
{}

void Leventure_DevelopKey::InsertWindowsTitle(QString title)
{
    this->ui.cobox_titlenames->addItem(title);
}

HWND Leventure_DevelopKey::findwindowByTitle(const wchar_t* windowTitle)
{
    return FindWindow(nullptr, windowTitle);
}

void Leventure_DevelopKey::InitProTitle(char* argv[])
{

}



void Leventure_DevelopKey::on_btn_GetHwnd_clicked()
{

    QString title = this->ui.cobox_titlenames->currentText();
    if (title.isEmpty()) {
        QMessageBox::warning(this, "title warning", "title is empty,plz choose right one");
        return;
    }

    wchar_t *cast = (wchar_t*)reinterpret_cast<const wchar_t*>(title.utf16());

    this->ProcessHWND = this->findwindowByTitle(cast);
    if (this->ProcessHWND == 0) {
        QMessageBox::warning(this, "HWND warning", "Cant find HWND,plz choose again");
    }

    this->ui.lab_hwnd->setText(this->ui.cobox_titlenames->currentText() + "窗口句柄" + QString::number((int)this->ProcessHWND));

}

void Leventure_DevelopKey::on_rabt_DeveloperMode_clicked()
{
    HWND mainWindowHandler = (HWND)this->winId();

    SetWindowText(mainWindowHandler,TEXT("Leventure_DeveloperMode"));
    this->setWindowTitle("Leventure_DeveloperMode");
    SetConsoleTitle(TEXT("Leventure_DeveloperMode"));
    HANDLE hProcess = GetCurrentProcess();
    DWORD_PTR dwMinimumWorkingSetSize = 0;
    DWORD_PTR dwMaximumWorkingSetSize = (DWORD_PTR)-1;
    SetProcessWorkingSetSizeEx(hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize, PROCESS_WORKING_SET_SIZE | PROCESS_NAME);

    //this->SetTitleName("Leventure_DeveloperMode");
}

void Leventure_DevelopKey::on_rabt_InfoMode_clicked()
{
    HWND mainWindowHandler = (HWND)this->winId();
    SetWindowText(mainWindowHandler,TEXT("Leventure_InfoMode"));
    this->setWindowTitle("Leventure_InfoMode");
    SetConsoleTitle(TEXT("Leventure_InfoMode"));
    HANDLE hProcess = GetCurrentProcess();
    DWORD_PTR dwMinimumWorkingSetSize = 0;
    DWORD_PTR dwMaximumWorkingSetSize = (DWORD_PTR)-1;
    SetProcessWorkingSetSizeEx(hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize, PROCESS_WORKING_SET_SIZE | PROCESS_NAME);

    //this->SetTitleName("Leventure_InfoMode");
}

void Leventure_DevelopKey::on_rabt_CompabilityModes_clicked()
{
    HWND mainWindowHandler = (HWND)this->winId();
    SetWindowText(mainWindowHandler,TEXT("Leventure_CompatibleMode"));
    this->setWindowTitle("Leventure_CompatibleMode");
    SetConsoleTitle(TEXT("Leventure_CompatibleMode"));
    HANDLE hProcess = GetCurrentProcess();
    DWORD_PTR dwMinimumWorkingSetSize = 0;
    DWORD_PTR dwMaximumWorkingSetSize = (DWORD_PTR)-1;
    SetProcessWorkingSetSizeEx(hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize, PROCESS_WORKING_SET_SIZE | PROCESS_NAME);

    //this->SetTitleName("Leventure_CompatibleMode");
}

void Leventure_DevelopKey::on_rabt_TestMode_clicked()
{
    HWND mainWindowHandler = (HWND)this->winId();
    SetWindowText(mainWindowHandler, TEXT("Leventure_TestMode"));
    this->setWindowTitle("Leventure_TestMode");
    SetConsoleTitle(TEXT("Leventure_TestMode"));
    HANDLE hProcess = GetCurrentProcess();
    DWORD_PTR dwMinimumWorkingSetSize = 0;
    DWORD_PTR dwMaximumWorkingSetSize = (DWORD_PTR)-1;
    SetProcessWorkingSetSizeEx(hProcess, dwMinimumWorkingSetSize, dwMaximumWorkingSetSize, PROCESS_WORKING_SET_SIZE | PROCESS_NAME);

}

void Leventure_DevelopKey::SetTitleName(const char* name)
{

    //char* p_tmp = NULL;
    //p_tmp = this->ProcessName;

    //strncpy(p_tmp, name, p_last - p_tmp);
    //return;
}



void Leventure_DevelopKey::lab_welcome_rolling()
{

   qDebug() << connect(&timer1, &QTimer::timeout, [=]() {
        if (this->ui.lab_welcom->x() < this->width()) {
            this->ui.lab_welcom->move(this->ui.lab_welcom->x() + 5, this->ui.lab_welcom->y());
        }
        else {
            this->ui.lab_welcom->move(-10, this->ui.lab_welcom->y());
        }
        });

    timer1.start(200);


    qDebug() << connect(&timer2, &QTimer::timeout, [=]() {
        qint32 randseed = 1;

            if (this->randseed == 114514) {
                this->randseed = 0;
            }
            else {
                this->randseed += 10;
            }
            qsrand(this->randseed);
        
    
        int r = qrand() % 255;
        int g = qrand() % 255;
        int b = qrand() % 255;
        QString stylesheet = QString("color:rgb(%1,%2,%3)").arg(QString::number(r), QString::number(g), QString::number(b));
        this->ui.lab_welcom->setStyleSheet(stylesheet);
        
        });

    timer2.start(200);
}

void Leventure_DevelopKey::InitFindWindows()
{
    QTextCodec* codec = QTextCodec::codecForName("GB2312");
    EnumWindows(&EnumWindowsProc, reinterpret_cast<LPARAM>(codec));
}

void Leventure_DevelopKey::Add(QString strValue)
{
    this->ui.txt_message->appendPlainText(strValue);
}

void Leventure_DevelopKey::on_btn_fresh_clicked()
{
    this->InitFindWindows();
}
