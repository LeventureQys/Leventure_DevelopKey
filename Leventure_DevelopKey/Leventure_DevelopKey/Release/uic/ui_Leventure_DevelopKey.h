/********************************************************************************
** Form generated from reading UI file 'Leventure_DevelopKey.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVENTURE_DEVELOPKEY_H
#define UI_LEVENTURE_DEVELOPKEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
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
    QRadioButton *rabt_DeveloperMode;
    QRadioButton *rabt_InfoMode;
    QRadioButton *rabt_CompabilityModes;
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
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Leventure_DevelopKeyClass)
    {
        if (Leventure_DevelopKeyClass->objectName().isEmpty())
            Leventure_DevelopKeyClass->setObjectName(QStringLiteral("Leventure_DevelopKeyClass"));
        Leventure_DevelopKeyClass->resize(523, 422);
        centralWidget = new QWidget(Leventure_DevelopKeyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 340, 131, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 320, 141, 16));
        lab_welcom = new QLabel(centralWidget);
        lab_welcom->setObjectName(QStringLiteral("lab_welcom"));
        lab_welcom->setGeometry(QRect(10, 10, 131, 21));
        lab_welcom->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 101, 91));
        rabt_DeveloperMode = new QRadioButton(groupBox);
        rabt_DeveloperMode->setObjectName(QStringLiteral("rabt_DeveloperMode"));
        rabt_DeveloperMode->setGeometry(QRect(10, 20, 89, 16));
        rabt_DeveloperMode->setChecked(true);
        rabt_InfoMode = new QRadioButton(groupBox);
        rabt_InfoMode->setObjectName(QStringLiteral("rabt_InfoMode"));
        rabt_InfoMode->setGeometry(QRect(10, 40, 89, 16));
        rabt_InfoMode->setChecked(false);
        rabt_CompabilityModes = new QRadioButton(groupBox);
        rabt_CompabilityModes->setObjectName(QStringLiteral("rabt_CompabilityModes"));
        rabt_CompabilityModes->setGeometry(QRect(10, 60, 89, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(140, 40, 371, 231));
        cobox_titlenames = new QComboBox(groupBox_2);
        cobox_titlenames->setObjectName(QStringLiteral("cobox_titlenames"));
        cobox_titlenames->setGeometry(QRect(60, 40, 301, 22));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 54, 12));
        btn_fresh = new QPushButton(groupBox_2);
        btn_fresh->setObjectName(QStringLiteral("btn_fresh"));
        btn_fresh->setGeometry(QRect(10, 40, 41, 23));
        btn_GetHwnd = new QPushButton(groupBox_2);
        btn_GetHwnd->setObjectName(QStringLiteral("btn_GetHwnd"));
        btn_GetHwnd->setGeometry(QRect(10, 70, 70, 23));
        lab_hwnd = new QLabel(groupBox_2);
        lab_hwnd->setObjectName(QStringLiteral("lab_hwnd"));
        lab_hwnd->setGeometry(QRect(93, 70, 271, 21));
        line_winmessage = new QLineEdit(groupBox_2);
        line_winmessage->setObjectName(QStringLiteral("line_winmessage"));
        line_winmessage->setGeometry(QRect(120, 130, 231, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 100, 71, 21));
        btn_sendmessage = new QPushButton(groupBox_2);
        btn_sendmessage->setObjectName(QStringLiteral("btn_sendmessage"));
        btn_sendmessage->setGeometry(QRect(10, 130, 41, 23));
        txt_message = new QPlainTextEdit(groupBox_2);
        txt_message->setObjectName(QStringLiteral("txt_message"));
        txt_message->setGeometry(QRect(10, 160, 351, 61));
        line_beginCode = new QLineEdit(groupBox_2);
        line_beginCode->setObjectName(QStringLiteral("line_beginCode"));
        line_beginCode->setGeometry(QRect(60, 130, 51, 20));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 110, 41, 16));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 110, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(390, 340, 121, 16));
        Leventure_DevelopKeyClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Leventure_DevelopKeyClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 23));
        Leventure_DevelopKeyClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Leventure_DevelopKeyClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Leventure_DevelopKeyClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Leventure_DevelopKeyClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Leventure_DevelopKeyClass->setStatusBar(statusBar);

        retranslateUi(Leventure_DevelopKeyClass);

        QMetaObject::connectSlotsByName(Leventure_DevelopKeyClass);
    } // setupUi

    void retranslateUi(QMainWindow *Leventure_DevelopKeyClass)
    {
        Leventure_DevelopKeyClass->setWindowTitle(QApplication::translate("Leventure_DevelopKeyClass", "Leventure_DevelopKey", nullptr));
        label->setText(QApplication::translate("Leventure_DevelopKeyClass", "Designed by Leventure", nullptr));
        label_2->setText(QApplication::translate("Leventure_DevelopKeyClass", "Leventure Devloper Key", nullptr));
        lab_welcom->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\244\247\345\260\217\345\247\220\351\251\276\345\210\260\357\274\214\347\273\237\347\273\237\351\227\252\345\274\200!", nullptr));
        groupBox->setTitle(QApplication::translate("Leventure_DevelopKeyClass", "\347\250\213\345\272\217\346\250\241\345\274\217", nullptr));
        rabt_DeveloperMode->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\274\200\345\217\221\350\200\205\346\250\241\345\274\217", nullptr));
        rabt_InfoMode->setText(QApplication::translate("Leventure_DevelopKeyClass", "Info\346\250\241\345\274\217", nullptr));
        rabt_CompabilityModes->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\205\274\345\256\271\346\250\241\345\274\217", nullptr));
        groupBox_2->setTitle(QApplication::translate("Leventure_DevelopKeyClass", "\350\260\203\350\257\225\345\267\245\345\205\267", nullptr));
        label_4->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\220\215\347\247\260", nullptr));
        btn_fresh->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\210\267\346\226\260", nullptr));
        btn_GetHwnd->setText(QApplication::translate("Leventure_DevelopKeyClass", "\350\216\267\345\276\227\345\217\245\346\237\204", nullptr));
        lab_hwnd->setText(QApplication::translate("Leventure_DevelopKeyClass", "\347\252\227\345\217\243\345\217\245\346\237\204:", nullptr));
        label_5->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\347\252\227\345\217\243\346\266\210\346\201\257:", nullptr));
        btn_sendmessage->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\217\221\351\200\201", nullptr));
        label_6->setText(QApplication::translate("Leventure_DevelopKeyClass", "\346\266\210\346\201\257\345\217\267", nullptr));
        label_7->setText(QApplication::translate("Leventure_DevelopKeyClass", "\345\206\205\345\256\271", nullptr));
        label_3->setText(QApplication::translate("Leventure_DevelopKeyClass", "Github:LeventureQys", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leventure_DevelopKeyClass: public Ui_Leventure_DevelopKeyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVENTURE_DEVELOPKEY_H
