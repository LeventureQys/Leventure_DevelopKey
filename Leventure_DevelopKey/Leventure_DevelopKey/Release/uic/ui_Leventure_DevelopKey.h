/********************************************************************************
** Form generated from reading UI file 'Leventure_DevelopKey.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVENTURE_DEVELOPKEY_H
#define UI_LEVENTURE_DEVELOPKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Leventure_DevelopKeyClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *lab_welcom;
    QGroupBox *groupBox;
    QSplitter *splitter;
    QRadioButton *rabt_DeveloperMode;
    QRadioButton *rabt_InfoMode;
    QRadioButton *rabt_CompabilityModes;
    QRadioButton *rabt_TestMode;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox_2;
    QComboBox *cobox_titlenames;
    QLabel *label_4;
    QPushButton *btn_fresh;
    QPushButton *btn_GetHwnd;
    QLabel *lab_hwnd;
    QLineEdit *line_winmessage;
    QLabel *label_5;
    QPushButton *btn_sendmessage;
    QPlainTextEdit *txt_message;
    QLineEdit *line_beginCode;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_13;
    QLineEdit *line_net_7;
    QLineEdit *line_net_6;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *line_net_5;
    QLineEdit *line_net_8;
    QPushButton *btn_ChangeNetwork;
    QSplitter *splitter_2;
    QLineEdit *line_net_1;
    QLabel *label_9;
    QLineEdit *line_net_2;
    QLabel *label_10;
    QLineEdit *line_net_3;
    QLabel *label_11;
    QLineEdit *line_net_4;
    QLineEdit *line_net_9;
    QLineEdit *line_net_10;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *line_net_11;
    QLineEdit *line_net_12;
    QLabel *label_22;
    QLabel *label_12;
    QPushButton *btn_netrecovery;
    QWidget *tab;
    QPlainTextEdit *text_json;
    QLabel *label_15;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_json_file;
    QPushButton *btn_json_check;
    QPushButton *btn_json_analyse;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Leventure_DevelopKeyClass)
    {
        if (Leventure_DevelopKeyClass->objectName().isEmpty())
            Leventure_DevelopKeyClass->setObjectName(QString::fromUtf8("Leventure_DevelopKeyClass"));
        Leventure_DevelopKeyClass->resize(666, 559);
        centralWidget = new QWidget(Leventure_DevelopKeyClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 480, 131, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 460, 141, 16));
        lab_welcom = new QLabel(centralWidget);
        lab_welcom->setObjectName(QString::fromUtf8("lab_welcom"));
        lab_welcom->setGeometry(QRect(10, 10, 131, 21));
        lab_welcom->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 450, 351, 51));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 20, 341, 16));
        splitter->setOrientation(Qt::Horizontal);
        rabt_DeveloperMode = new QRadioButton(splitter);
        rabt_DeveloperMode->setObjectName(QString::fromUtf8("rabt_DeveloperMode"));
        rabt_DeveloperMode->setChecked(true);
        splitter->addWidget(rabt_DeveloperMode);
        rabt_InfoMode = new QRadioButton(splitter);
        rabt_InfoMode->setObjectName(QString::fromUtf8("rabt_InfoMode"));
        rabt_InfoMode->setChecked(false);
        splitter->addWidget(rabt_InfoMode);
        rabt_CompabilityModes = new QRadioButton(splitter);
        rabt_CompabilityModes->setObjectName(QString::fromUtf8("rabt_CompabilityModes"));
        splitter->addWidget(rabt_CompabilityModes);
        rabt_TestMode = new QRadioButton(splitter);
        rabt_TestMode->setObjectName(QString::fromUtf8("rabt_TestMode"));
        splitter->addWidget(rabt_TestMode);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 480, 121, 16));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 30, 511, 411));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 501, 381));
        cobox_titlenames = new QComboBox(groupBox_2);
        cobox_titlenames->setObjectName(QString::fromUtf8("cobox_titlenames"));
        cobox_titlenames->setGeometry(QRect(60, 40, 301, 22));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 54, 12));
        btn_fresh = new QPushButton(groupBox_2);
        btn_fresh->setObjectName(QString::fromUtf8("btn_fresh"));
        btn_fresh->setGeometry(QRect(10, 40, 41, 23));
        btn_GetHwnd = new QPushButton(groupBox_2);
        btn_GetHwnd->setObjectName(QString::fromUtf8("btn_GetHwnd"));
        btn_GetHwnd->setGeometry(QRect(10, 70, 70, 23));
        lab_hwnd = new QLabel(groupBox_2);
        lab_hwnd->setObjectName(QString::fromUtf8("lab_hwnd"));
        lab_hwnd->setGeometry(QRect(93, 70, 271, 21));
        line_winmessage = new QLineEdit(groupBox_2);
        line_winmessage->setObjectName(QString::fromUtf8("line_winmessage"));
        line_winmessage->setGeometry(QRect(120, 130, 231, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 71, 21));
        btn_sendmessage = new QPushButton(groupBox_2);
        btn_sendmessage->setObjectName(QString::fromUtf8("btn_sendmessage"));
        btn_sendmessage->setGeometry(QRect(10, 130, 41, 23));
        txt_message = new QPlainTextEdit(groupBox_2);
        txt_message->setObjectName(QString::fromUtf8("txt_message"));
        txt_message->setGeometry(QRect(10, 160, 351, 61));
        line_beginCode = new QLineEdit(groupBox_2);
        line_beginCode->setObjectName(QString::fromUtf8("line_beginCode"));
        line_beginCode->setGeometry(QRect(60, 130, 51, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 110, 41, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 110, 54, 12));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 10, 71, 16));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(17, 70, 61, 16));
        line_net_7 = new QLineEdit(tab_4);
        line_net_7->setObjectName(QString::fromUtf8("line_net_7"));
        line_net_7->setGeometry(QRect(118, 100, 33, 20));
        line_net_6 = new QLineEdit(tab_4);
        line_net_6->setObjectName(QString::fromUtf8("line_net_6"));
        line_net_6->setGeometry(QRect(69, 100, 33, 20));
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(107, 100, 6, 20));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(58, 100, 6, 20));
        label_19 = new QLabel(tab_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(156, 100, 6, 20));
        line_net_5 = new QLineEdit(tab_4);
        line_net_5->setObjectName(QString::fromUtf8("line_net_5"));
        line_net_5->setGeometry(QRect(20, 100, 33, 20));
        line_net_8 = new QLineEdit(tab_4);
        line_net_8->setObjectName(QString::fromUtf8("line_net_8"));
        line_net_8->setGeometry(QRect(167, 100, 33, 20));
        btn_ChangeNetwork = new QPushButton(tab_4);
        btn_ChangeNetwork->setObjectName(QString::fromUtf8("btn_ChangeNetwork"));
        btn_ChangeNetwork->setGeometry(QRect(210, 40, 75, 23));
        splitter_2 = new QSplitter(tab_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(20, 40, 181, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        line_net_1 = new QLineEdit(splitter_2);
        line_net_1->setObjectName(QString::fromUtf8("line_net_1"));
        splitter_2->addWidget(line_net_1);
        label_9 = new QLabel(splitter_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        splitter_2->addWidget(label_9);
        line_net_2 = new QLineEdit(splitter_2);
        line_net_2->setObjectName(QString::fromUtf8("line_net_2"));
        splitter_2->addWidget(line_net_2);
        label_10 = new QLabel(splitter_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        splitter_2->addWidget(label_10);
        line_net_3 = new QLineEdit(splitter_2);
        line_net_3->setObjectName(QString::fromUtf8("line_net_3"));
        splitter_2->addWidget(line_net_3);
        label_11 = new QLabel(splitter_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        splitter_2->addWidget(label_11);
        line_net_4 = new QLineEdit(splitter_2);
        line_net_4->setObjectName(QString::fromUtf8("line_net_4"));
        splitter_2->addWidget(line_net_4);
        line_net_9 = new QLineEdit(tab_4);
        line_net_9->setObjectName(QString::fromUtf8("line_net_9"));
        line_net_9->setGeometry(QRect(23, 160, 33, 20));
        line_net_10 = new QLineEdit(tab_4);
        line_net_10->setObjectName(QString::fromUtf8("line_net_10"));
        line_net_10->setGeometry(QRect(170, 160, 33, 20));
        label_20 = new QLabel(tab_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(61, 160, 6, 20));
        label_21 = new QLabel(tab_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(159, 160, 6, 20));
        line_net_11 = new QLineEdit(tab_4);
        line_net_11->setObjectName(QString::fromUtf8("line_net_11"));
        line_net_11->setGeometry(QRect(121, 160, 33, 20));
        line_net_12 = new QLineEdit(tab_4);
        line_net_12->setObjectName(QString::fromUtf8("line_net_12"));
        line_net_12->setGeometry(QRect(72, 160, 33, 20));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(110, 160, 6, 20));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 140, 54, 12));
        btn_netrecovery = new QPushButton(tab_4);
        btn_netrecovery->setObjectName(QString::fromUtf8("btn_netrecovery"));
        btn_netrecovery->setGeometry(QRect(210, 70, 75, 23));
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        text_json = new QPlainTextEdit(tab);
        text_json->setObjectName(QString::fromUtf8("text_json"));
        text_json->setGeometry(QRect(10, 140, 301, 221));
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 120, 54, 12));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 301, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_json_file = new QLineEdit(widget);
        line_json_file->setObjectName(QString::fromUtf8("line_json_file"));

        horizontalLayout->addWidget(line_json_file);

        btn_json_check = new QPushButton(widget);
        btn_json_check->setObjectName(QString::fromUtf8("btn_json_check"));

        horizontalLayout->addWidget(btn_json_check);


        verticalLayout->addLayout(horizontalLayout);

        btn_json_analyse = new QPushButton(widget);
        btn_json_analyse->setObjectName(QString::fromUtf8("btn_json_analyse"));

        verticalLayout->addWidget(btn_json_analyse);

        tabWidget->addTab(tab, QString());
        Leventure_DevelopKeyClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Leventure_DevelopKeyClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 23));
        Leventure_DevelopKeyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Leventure_DevelopKeyClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Leventure_DevelopKeyClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Leventure_DevelopKeyClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Leventure_DevelopKeyClass->setStatusBar(statusBar);

        retranslateUi(Leventure_DevelopKeyClass);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Leventure_DevelopKeyClass);
    } // setupUi

    void retranslateUi(QMainWindow *Leventure_DevelopKeyClass)
    {
        Leventure_DevelopKeyClass->setWindowTitle(QCoreApplication::translate("Leventure_DevelopKeyClass", "Leventure_DevelopKey", nullptr));
        label->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "Designed by Leventure", nullptr));
        label_2->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "Leventure Devloper Key", nullptr));
        lab_welcom->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\244\247\345\260\217\345\247\220\351\251\276\345\210\260\357\274\214\347\273\237\347\273\237\351\227\252\345\274\200!", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\250\213\345\272\217\346\250\241\345\274\217", nullptr));
        rabt_DeveloperMode->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217", nullptr));
        rabt_InfoMode->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "Info\346\250\241\345\274\217", nullptr));
        rabt_CompabilityModes->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\205\274\345\256\271\346\250\241\345\274\217", nullptr));
        rabt_TestMode->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\267\245\347\250\213\346\250\241\345\274\217", nullptr));
        label_3->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "Github:LeventureQys", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        label_4->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\220\215\347\247\260", nullptr));
        btn_fresh->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\210\267\346\226\260", nullptr));
        btn_GetHwnd->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\216\267\345\276\227\345\217\245\346\237\204", nullptr));
        lab_hwnd->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\217\245\346\237\204:", nullptr));
        label_5->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\347\252\227\345\217\243\346\266\210\346\201\257:", nullptr));
        btn_sendmessage->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\351\200\201", nullptr));
        label_6->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\346\266\210\346\201\257\345\217\267", nullptr));
        label_7->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\206\205\345\256\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        label_8->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\346\233\277\346\215\242IP", nullptr));
        label_13->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\345\255\220\347\275\221\346\216\251\347\240\201", nullptr));
        line_net_7->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        line_net_6->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        label_17->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_18->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_19->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_5->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        line_net_8->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "0", nullptr));
        btn_ChangeNetwork->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\344\270\264\346\227\266\346\233\277\346\215\242", nullptr));
        line_net_1->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "192", nullptr));
        label_9->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_2->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "168", nullptr));
        label_10->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_3->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "1", nullptr));
        label_11->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_4->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "123", nullptr));
        line_net_9->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "192", nullptr));
        line_net_10->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "254", nullptr));
        label_20->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_21->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_11->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "1", nullptr));
        line_net_12->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "168", nullptr));
        label_22->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_12->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\275\221\345\205\263", nullptr));
        btn_netrecovery->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\346\201\242\345\244\215\345\216\237\347\212\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\275\221\347\273\234\345\267\245\345\205\267", nullptr));
        label_15->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\347\273\223\346\236\234", nullptr));
        label_14->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\276\223\345\205\245\346\226\207\344\273\266\344\275\215\347\275\256", nullptr));
        btn_json_check->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\346\265\217\350\247\210..", nullptr));
        btn_json_analyse->setText(QCoreApplication::translate("Leventure_DevelopKeyClass", "\350\247\243\346\236\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Leventure_DevelopKeyClass", "JSON\350\247\243\346\236\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leventure_DevelopKeyClass: public Ui_Leventure_DevelopKeyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVENTURE_DEVELOPKEY_H
