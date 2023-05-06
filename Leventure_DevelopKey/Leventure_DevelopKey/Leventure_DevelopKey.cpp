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

Leventure_DevelopKey::Leventure_DevelopKey(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->show();
    lab_welcome_rolling();
    QtConcurrent::run([=]() {
        //需要异步处理这个当前窗口的获取
        this->InitFindWindows();
        });
    QList<QNetworkInterface> network = QNetworkInterface::allInterfaces();    // 获取所有的接口
    foreach(QNetworkInterface net, network)
    {
        QNetworkInterface::InterfaceFlags flags = net.flags();

        QString netName = net.humanReadableName();  // 获取网络名称

        QList<QNetworkAddressEntry> list = net.addressEntries();  // 获取IP地址与子网掩码等
        if (flags.testFlag(QNetworkInterface::IsLoopBack) ||
            !flags.testFlag(QNetworkInterface::IsRunning) ||
            netName.contains("VM")){
            //跳过本地回环地址、非运行网卡、虚拟网卡
            continue;

}
        foreach(QNetworkAddressEntry address, list)
        {
           
            if (address.ip().protocol() == QAbstractSocket::IPv4Protocol)  // 获取IPv4的地址
            {
                qDebug() << "网卡名：" << netName
                    << " IPv4：" << address.ip().toString()
                    << " 子网掩码：" << address.netmask().toString();
                    
                this->str_default_device_name = netName;
                this->str_default_ip_address = address.ip().toString();
                this->str_default_netmask = address.netmask().toString();
                
                //将最后一个.后面的数字删除并改为254
                this->str_defaut_gateway = this->str_default_ip_address.left(this->str_default_ip_address.lastIndexOf('.'));
                this->str_defaut_gateway += ".254";
            }
        }
    }

    this->memory = new QSharedMemory("Leventure's_Software");
    //默认开发者模式
    
    this->SetSharedMemory("DeveloperMode");

}

void Leventure_DevelopKey::SetSharedMemory(QString insert)
{
    if (!this->memory->isAttached()) {
        qDebug() << "Memory not attach yet";
    }
    qDebug() << insert;
    // create new shared memory
    int size = insert.toUtf8().length();   // ensure the shared memory is large enough to hold the string and the ending '\0' symbol
    if (!this->memory->create(size)) {
        qDebug() << "Failed to create shared memory: " << this->memory->errorString();
        return;
    }

    // copy data to the shared memory
    this->memory->lock();
    char* to = static_cast<char*>(this->memory->data());

    //这一块内存需要保存，不然这个中间的这个指针就会被编译器优化了
    QByteArray bta = insert.toUtf8();
    const char* from = bta.constData();

    memcpy(to, from, size);
    this->memory->unlock();
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
    this->SetSharedMemory("DeveloperMode");
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
    this->SetSharedMemory("InfoMode");
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
    this->SetSharedMemory("CompatibleMode");
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
    this->SetSharedMemory("TestMode");
}

void Leventure_DevelopKey::on_btn_config_check_clicked()
{
    QString str = QFileDialog::getOpenFileName(this, "选择INI文件", "", "INI 文件(*.ini)");
    QFile file(str);
    if (!file.exists()) {
        this->ui.table_confirm->clearContents();
        this->ui.table_confirm->setColumnCount(1);

        this->ui.table_confirm->setItem(1, 1, new QTableWidgetItem(QString("选择的文件不存在！")));
    }
    else {
        this->ui.line_config->setText(str);
        this->ui.table_confirm->setColumnCount(2);
        QStringList headerLabels;
        headerLabels << "Key" << "Value";
        this->ui.table_confirm->setHorizontalHeaderLabels(headerLabels);

        QSettings settings(str, QSettings::IniFormat);

        QList<QString> keys = settings.allKeys();
        this->ui.table_confirm->setRowCount(keys.size());
        int i = 0;
        for (auto key : keys) {
            this->ui.table_confirm->setItem(i, 0, new QTableWidgetItem(QString(key)));
            this->ui.table_confirm->setItem(i, 1, new QTableWidgetItem(QString(settings.value(key).toString())));
            
            ++i;
        }
    }
}

void Leventure_DevelopKey::on_btn_config_confrim_clicked()
{
    QFile file(this->ui.line_config->text());

    if (!file.exists()) {
        this->ui.txt_config->appendPlainText("文件不存在，请重新选择");
        return;
    }

    QSettings settings(this->ui.line_config->text(), QSettings::IniFormat);
    for (int i = 0; i < this->ui.table_confirm->rowCount(); ++i) {
        QString key = this->ui.table_confirm->item(i, 0)->text();
        QString value = this->ui.table_confirm->item(i, 1)->text();
        settings.setValue(key, value);
        QColor green(0, 255, 0);
        this->ui.table_confirm->item(i, 0)->setBackgroundColor(green);
        this->ui.table_confirm->item(i, 1)->setBackgroundColor(green);

    }

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

void Leventure_DevelopKey::ChangedIpConfig(QString str_device, QString str_ip, QString str_netmask, QString str_gateway)
{
    if (str_device.isEmpty()) {
        return;
    }

    if (str_netmask.isEmpty()) {
        return;
    }

    if (str_gateway.isEmpty()) {
        return;
    }

    QProcess* process = new QProcess();

    QString cmd = "netsh interface ip set address ";
    cmd += "\"";     //网卡名称要加双引号

    cmd += str_device;
    cmd += "\" ";

    cmd += "static ";

    cmd += str_ip;
    cmd += " ";
    //子网掩码
    cmd += str_netmask;
    cmd += " ";

    cmd += str_gateway;

    qDebug() << "Insert CMD:" << cmd;

    process->start(cmd);
    process->waitForFinished();
    delete process;



}



void Leventure_DevelopKey::on_btn_fresh_clicked()
{
    this->InitFindWindows();
}

void Leventure_DevelopKey::on_btn_ChangeNetwork_clicked() {
    if (bln_netchanged) {
        qDebug() << "Net Already Changed";
        return;
    }
    //点击一次之后
    this->bln_netchanged = true;


    QString str_tempIp = "";
    QString str_netmask = "";
    QString str_gateway = "";

    str_tempIp += this->ui.line_net_1->text() + ".";
    str_tempIp += this->ui.line_net_2->text() + ".";
    str_tempIp += this->ui.line_net_3->text() + ".";
    str_tempIp += this->ui.line_net_4->text() ;

    str_netmask += this->ui.line_net_5->text() + ".";
    str_netmask += this->ui.line_net_6->text() + ".";
    str_netmask += this->ui.line_net_7->text() + ".";
    str_netmask += this->ui.line_net_8->text();

    str_gateway += this->ui.line_net_9->text() + ".";
    str_gateway += this->ui.line_net_10->text() + ".";
    str_gateway += this->ui.line_net_11->text() + ".";
    str_gateway += this->ui.line_net_12->text();

    this->ChangedIpConfig(this->str_default_device_name, str_tempIp, str_netmask, str_gateway);


    this->ui.btn_ChangeNetwork->setCheckable(false);
    this->ui.btn_netrecovery->setCheckable(true);
    this->ui.line_net_1->setEnabled(false);
    this->ui.line_net_2->setEnabled(false);
    this->ui.line_net_3->setEnabled(false);
    this->ui.line_net_4->setEnabled(false);
    this->ui.line_net_5->setEnabled(false);
    this->ui.line_net_6->setEnabled(false);
    this->ui.line_net_7->setEnabled(false);
    this->ui.line_net_8->setEnabled(false);
    this->ui.line_net_9->setEnabled(false);
    this->ui.line_net_10->setEnabled(false);
    this->ui.line_net_11->setEnabled(false);
    this->ui.line_net_12->setEnabled(false);
}

void Leventure_DevelopKey::on_btn_netrecovery_clicked()
{
    this->ui.line_net_1->setEnabled(true);
    this->ui.line_net_2->setEnabled(true);
    this->ui.line_net_3->setEnabled(true);
    this->ui.line_net_4->setEnabled(true);
    this->ui.line_net_5->setEnabled(true);
    this->ui.line_net_6->setEnabled(true);
    this->ui.line_net_7->setEnabled(true);
    this->ui.line_net_8->setEnabled(true);
    this->ui.line_net_9->setEnabled(true);
    this->ui.line_net_10->setEnabled(true);
    this->ui.line_net_11->setEnabled(true);
    this->ui.line_net_12->setEnabled(true);
    /*this->ChangedIpConfig(
        this->str_default_device_name,
        this->str_default_ip_address,
        this->str_default_netmask,
        this->str_defaut_gateway);*/

    QString command = "netsh interface ip set address name = " + this->str_default_device_name + " source=dhcp";
    QString adddns = "netsh interface ip set dns name = " + this->str_default_device_name + " source=dhcp";
    
    this->bln_netchanged = false;

    QProcess* process = new QProcess();

    process->start(command);
    process->waitForFinished();

    process->start(adddns);
    process->waitForFinished();
    this->ui.btn_ChangeNetwork->setCheckable(true);

    this->ui.btn_netrecovery->setCheckable(false);
}
