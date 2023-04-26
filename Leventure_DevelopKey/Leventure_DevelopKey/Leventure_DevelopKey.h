#pragma once
#pragma execution_character_set("utf-8")
//Author:Leventure
//Info:Leventure 个人开发进程钥匙，用于给我的项目打开一个
#include <QtWidgets/QMainWindow>
#include "ui_Leventure_DevelopKey.h"
#include "qtimer.h"
#include "qdebug.h"
#include "windows.h"
#include "qwindow.h"
#include <QtextCodec>
#include "qmutex.h"
#include <mutex>
#include "qmessagebox.h"
#include "qfuture.h"
#include <QtConcurrent>
#include "qnetworkinterface.h"
#include "QFileDialog.h"
#include "qtextstream.h"
#ifndef PROCESS_NAME
#define PROCESS_NAME (0x00002000L | 0x00001000L)
#endif

#ifndef PROCESS_WORKING_SET_SIZE
#define PROCESS_WORKING_SET_SIZE 0x00000001
#endif

class Leventure_DevelopKey : public QMainWindow
{
    Q_OBJECT

public:
    Leventure_DevelopKey(QWidget *parent = nullptr);
    ~Leventure_DevelopKey();


    static  Leventure_DevelopKey* Singleton() {
        static QMutex mutex;
        QMutexLocker locker(&mutex);
        static  Leventure_DevelopKey* instance = new  Leventure_DevelopKey();
        return instance;
    }
    //默认的初始化ip
    QString str_default_ip_address = "";
    QString str_default_netmask = "";
    QString str_default_device_name = "";
    QString str_defaut_gateway = "";
    void InsertWindowsTitle(QString title);
    HWND findwindowByTitle(const wchar_t* windowTitle);

    void InitProTitle(char* argv[]);

    bool bln_netchanged = false;
signals:
    void Sig_Titles(QString title);
private slots:
    void on_btn_fresh_clicked();
    void on_btn_GetHwnd_clicked();

    void on_rabt_DeveloperMode_clicked();
    void on_rabt_InfoMode_clicked();
    void on_rabt_CompabilityModes_clicked();
    void on_btn_ChangeNetwork_clicked();
    void on_btn_netrecovery_clicked();
    void on_rabt_TestMode_clicked();
    void on_btn_json_check_clicked();
    void on_btn_json_analyse_clicked();


private:
    bool save_as_json(QList<QString>& jsonStr, QString fileName);
    char* ProcessName = Q_NULLPTR;
    char* p_last = NULL;

    void SetTitleName(const char* name);
    //当前这个进程的进程句柄
    HWND ProcessHWND;

    static QMutex s_mutex;
    Ui::Leventure_DevelopKeyClass ui;
    void lab_welcome_rolling();

    QTimer timer1;
    QTimer timer2;
    int randseed = 0;

    //找窗口程序
    void InitFindWindows();
    void Add(QString strValue);

    void ChangedIpConfig(QString str_device,QString str_ip, QString str_netmask, QString str_gateway);
    Q_DISABLE_COPY(Leventure_DevelopKey)

};

