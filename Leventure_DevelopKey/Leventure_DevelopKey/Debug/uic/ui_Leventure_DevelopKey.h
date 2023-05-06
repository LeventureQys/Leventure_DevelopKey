/********************************************************************************
** Form generated from reading UI file 'Leventure_DevelopKey.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVENTURE_DEVELOPKEY_H
#define UI_LEVENTURE_DEVELOPKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Leventure_DevelopKeyClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QSplitter *splitter;
    QRadioButton *rabt_DeveloperMode;
    QRadioButton *rabt_InfoMode;
    QRadioButton *rabt_CompabilityModes;
    QRadioButton *rabt_TestMode;
    QLabel *lab_welcom;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
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
    QGridLayout *gridLayout_3;
    QPushButton *btn_config_check;
    QLineEdit *line_config;
    QTableWidget *table_confirm;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_config_confrim;
    QPlainTextEdit *txt_config;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Leventure_DevelopKeyClass)
    {
        if (Leventure_DevelopKeyClass->objectName().isEmpty())
            Leventure_DevelopKeyClass->setObjectName(QString::fromUtf8("Leventure_DevelopKeyClass"));
        Leventure_DevelopKeyClass->resize(491, 589);
        centralWidget = new QWidget(Leventure_DevelopKeyClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 0, 0);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(350, 50));
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

        gridLayout->addWidget(groupBox, 3, 1, 2, 1);

        lab_welcom = new QLabel(centralWidget);
        lab_welcom->setObjectName(QString::fromUtf8("lab_welcom"));
        lab_welcom->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 127);"));

        gridLayout->addWidget(lab_welcom, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
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
        txt_message->setGeometry(QRect(20, 170, 351, 261));
        line_beginCode = new QLineEdit(groupBox_2);
        line_beginCode->setObjectName(QString::fromUtf8("line_beginCode"));
        line_beginCode->setGeometry(QRect(60, 130, 51, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 110, 41, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 110, 54, 12));

        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);

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
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        btn_config_check = new QPushButton(tab);
        btn_config_check->setObjectName(QString::fromUtf8("btn_config_check"));

        gridLayout_3->addWidget(btn_config_check, 0, 0, 1, 1);

        line_config = new QLineEdit(tab);
        line_config->setObjectName(QString::fromUtf8("line_config"));

        gridLayout_3->addWidget(line_config, 0, 1, 1, 1);

        table_confirm = new QTableWidget(tab);
        table_confirm->setObjectName(QString::fromUtf8("table_confirm"));

        gridLayout_3->addWidget(table_confirm, 2, 1, 1, 1);

        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(70, 0));
        widget->setMaximumSize(QSize(70, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_config_confrim = new QPushButton(widget);
        btn_config_confrim->setObjectName(QString::fromUtf8("btn_config_confrim"));
        btn_config_confrim->setMinimumSize(QSize(50, 0));
        btn_config_confrim->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(btn_config_confrim);

        txt_config = new QPlainTextEdit(widget);
        txt_config->setObjectName(QString::fromUtf8("txt_config"));
        txt_config->setMinimumSize(QSize(50, 0));
        txt_config->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(txt_config);


        gridLayout_3->addWidget(widget, 1, 0, 2, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        Leventure_DevelopKeyClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Leventure_DevelopKeyClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 491, 23));
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
        Leventure_DevelopKeyClass->setWindowTitle(QApplication::translate("Leventure_DevelopKeyClass", "Leventure_DevelopKey", nullptr));
        groupBox->setTitle(QApplication::translate("Leventure_DevelopKeyClass", "\347\250\213\345\272\217\346\250\241\345\274\217", nullptr));
        rabt_DeveloperMode->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217", nullptr));
        rabt_InfoMode->setText(QApplication::translate("Leventure_DevelopKeyClass", "Info\346\250\241\345\274\217", nullptr));
        rabt_CompabilityModes->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\205\274\345\256\271\346\250\241\345\274\217", nullptr));
        rabt_TestMode->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\267\245\347\250\213\346\250\241\345\274\217", nullptr));
        lab_welcom->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\244\247\345\260\217\345\247\220\351\251\276\345\210\260\357\274\214\347\273\237\347\273\237\351\227\252\345\274\200!", nullptr));
        groupBox_2->setTitle(QApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        label_4->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\220\215\347\247\260", nullptr));
        btn_fresh->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\210\267\346\226\260", nullptr));
        btn_GetHwnd->setText(QApplication::translate("Leventure_DevelopKeyClass", "\350\216\267\345\276\227\345\217\245\346\237\204", nullptr));
        lab_hwnd->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\217\245\346\237\204:", nullptr));
        label_5->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\347\252\227\345\217\243\346\266\210\346\201\257:", nullptr));
        btn_sendmessage->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\351\200\201", nullptr));
        label_6->setText(QApplication::translate("Leventure_DevelopKeyClass", "\346\266\210\346\201\257\345\217\267", nullptr));
        label_7->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\206\205\345\256\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        label_8->setText(QApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\346\233\277\346\215\242IP", nullptr));
        label_13->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\255\220\347\275\221\346\216\251\347\240\201", nullptr));
        line_net_7->setText(QApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        line_net_6->setText(QApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        label_17->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_18->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_19->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_5->setText(QApplication::translate("Leventure_DevelopKeyClass", "255", nullptr));
        line_net_8->setText(QApplication::translate("Leventure_DevelopKeyClass", "0", nullptr));
        btn_ChangeNetwork->setText(QApplication::translate("Leventure_DevelopKeyClass", "\344\270\264\346\227\266\346\233\277\346\215\242", nullptr));
        line_net_1->setText(QApplication::translate("Leventure_DevelopKeyClass", "192", nullptr));
        label_9->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_2->setText(QApplication::translate("Leventure_DevelopKeyClass", "168", nullptr));
        label_10->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_3->setText(QApplication::translate("Leventure_DevelopKeyClass", "1", nullptr));
        label_11->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_4->setText(QApplication::translate("Leventure_DevelopKeyClass", "123", nullptr));
        line_net_9->setText(QApplication::translate("Leventure_DevelopKeyClass", "192", nullptr));
        line_net_10->setText(QApplication::translate("Leventure_DevelopKeyClass", "254", nullptr));
        label_20->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_21->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        line_net_11->setText(QApplication::translate("Leventure_DevelopKeyClass", "1", nullptr));
        line_net_12->setText(QApplication::translate("Leventure_DevelopKeyClass", "168", nullptr));
        label_22->setText(QApplication::translate("Leventure_DevelopKeyClass", ".", nullptr));
        label_12->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\275\221\345\205\263", nullptr));
        btn_netrecovery->setText(QApplication::translate("Leventure_DevelopKeyClass", "\346\201\242\345\244\215\345\216\237\347\212\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Leventure_DevelopKeyClass", "\347\275\221\347\273\234\345\267\245\345\205\267", nullptr));
        btn_config_check->setText(QApplication::translate("Leventure_DevelopKeyClass", "\346\265\217\350\247\210", nullptr));
        btn_config_confrim->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\241\256\345\256\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Leventure_DevelopKeyClass", "\351\205\215\347\275\256\346\226\207\344\273\266", nullptr));
        label_2->setText(QApplication::translate("Leventure_DevelopKeyClass", "Leventure Devloper Key", nullptr));
        label_3->setText(QApplication::translate("Leventure_DevelopKeyClass", "Github:LeventureQys", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leventure_DevelopKeyClass: public Ui_Leventure_DevelopKeyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVENTURE_DEVELOPKEY_H
