#pragma once
/********************************************************************************
** Form generated from reading UI file 'LoginMenuooeEye.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINMENUOOEEYE_H
#define LOGINMENUOOEEYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMenu
{
public:
    QFrame* frame;
    QPushButton* close;
    QLineEdit* accountLine;
    QLabel* loginText;
    QLineEdit* passwordLine;
    QLabel* passwordText;
    QPushButton* loginButton;
    QCommandLinkButton* regButton;

    void setupUi(QWidget* LoginMenu)
    {
        if (LoginMenu->objectName().isEmpty())
            LoginMenu->setObjectName(QString::fromUtf8("LoginMenu"));
        LoginMenu->resize(805, 454);
        LoginMenu->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(LoginMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 600, 400));
        frame->setMinimumSize(QSize(600, 400));
        frame->setMaximumSize(QSize(600, 400));
        frame->setStyleSheet(QString::fromUtf8("\n"
            "QFrame{\n"
            "border-image: url(:/StudentScoreManageSys/img/logintest.png);\n"
            "}\n"
            ""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(550, 0, 50, 30));
        close->setMinimumSize(QSize(50, 30));
        close->setMaximumSize(QSize(50, 30));
        close->setCursor(QCursor(Qt::ClosedHandCursor));
        close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
            "border-image: url(:/StudentScoreManageSys/img/closeButton.png);\n"
            "}"));
        accountLine = new QLineEdit(frame);
        accountLine->setObjectName(QString::fromUtf8("accountLine"));
        accountLine->setGeometry(QRect(205, 220, 250, 26));
        accountLine->setMinimumSize(QSize(250, 26));
        accountLine->setMaximumSize(QSize(250, 26));
        accountLine->setFocusPolicy(Qt::StrongFocus);
        accountLine->setContextMenuPolicy(Qt::DefaultContextMenu);
        accountLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        loginText = new QLabel(frame);
        loginText->setObjectName(QString::fromUtf8("loginText"));
        loginText->setGeometry(QRect(145, 213, 51, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        loginText->setFont(font);
        loginText->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        passwordLine = new QLineEdit(frame);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setGeometry(QRect(205, 270, 250, 26));
        passwordLine->setMinimumSize(QSize(250, 26));
        passwordLine->setMaximumSize(QSize(250, 26));
        passwordLine->setFocusPolicy(Qt::StrongFocus);
        passwordLine->setContextMenuPolicy(Qt::DefaultContextMenu);
        passwordLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        passwordText = new QLabel(frame);
        passwordText->setObjectName(QString::fromUtf8("passwordText"));
        passwordText->setGeometry(QRect(145, 263, 51, 41));
        passwordText->setFont(font);
        passwordText->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(175, 330, 250, 50));
        loginButton->setMinimumSize(QSize(250, 50));
        loginButton->setMaximumSize(QSize(170, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(18);
        loginButton->setFont(font1);
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));
        regButton = new QCommandLinkButton(frame);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(0, 360, 71, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        regButton->setFont(font2);
        regButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(LoginMenu);
        QObject::connect(close, SIGNAL(clicked()), LoginMenu, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginMenu);
    } // setupUi

    void retranslateUi(QWidget* LoginMenu)
    {
        LoginMenu->setWindowTitle(QCoreApplication::translate("LoginMenu", "LoginMenu", nullptr));
        close->setText(QString());
        accountLine->setPlaceholderText(QCoreApplication::translate("LoginMenu", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        loginText->setText(QCoreApplication::translate("LoginMenu", "\350\264\246\345\217\267", nullptr));
        passwordLine->setPlaceholderText(QCoreApplication::translate("LoginMenu", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        passwordText->setText(QCoreApplication::translate("LoginMenu", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginMenu", "\347\231\273\345\275\225", nullptr));
        regButton->setText(QCoreApplication::translate("LoginMenu", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginMenu : public Ui_LoginMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINMENUOOEEYE_H
