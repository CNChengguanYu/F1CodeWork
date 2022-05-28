/********************************************************************************
** Form generated from reading UI file 'RegAccMenuTCozfH.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef REGACCMENUTCOZFH_H
#define REGACCMENUTCOZFH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QRegExpValidator>    //正则表达式，输入头文件标准化

QT_BEGIN_NAMESPACE

class Ui_RegAccMenu
{
public:
    QFrame* frame;
    QPushButton* backBtn;
    QLabel* nameText;
    QLabel* checkPassword;
    QLabel* pAssword;
    QLabel* accText;
    QLineEdit* nameLine;
    QLineEdit* accLine;
    QLineEdit* pAsswordLine;
    QLineEdit* checkPasswordLine;
    QPushButton* accENDBtn;

    void setupUi(QWidget* RegAccMenu)
    {
        if (RegAccMenu->objectName().isEmpty())
            RegAccMenu->setObjectName(QString::fromUtf8("RegAccMenu"));
        RegAccMenu->resize(719, 453);
        frame = new QFrame(RegAccMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 600, 400));
        frame->setMinimumSize(QSize(600, 400));
        frame->setMaximumSize(QSize(600, 400));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "border-image: url(:/StudentScoreManageSys/img/logintest.png);\n"
            "}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backBtn = new QPushButton(frame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(0, 0, 50, 30));
        backBtn->setMinimumSize(QSize(50, 30));
        backBtn->setMaximumSize(QSize(50, 30));
        backBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/BackButton.png);"));
        nameText = new QLabel(frame);
        nameText->setObjectName(QString::fromUtf8("nameText"));
        nameText->setGeometry(QRect(140, 182, 51, 41));
        nameText->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        checkPassword = new QLabel(frame);
        checkPassword->setObjectName(QString::fromUtf8("checkPassword"));
        checkPassword->setGeometry(QRect(120, 302, 91, 41));
        checkPassword->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        pAssword = new QLabel(frame);
        pAssword->setObjectName(QString::fromUtf8("pAssword"));
        pAssword->setGeometry(QRect(140, 262, 51, 41));
        pAssword->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        accText = new QLabel(frame);
        accText->setObjectName(QString::fromUtf8("accText"));
        accText->setGeometry(QRect(140, 222, 51, 41));
        accText->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "	border-image: url(:/StudentScoreManageSys/img/white.png);\n"
            "	font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
            "}"));
        nameLine = new QLineEdit(frame);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(210, 190, 250, 26));
        nameLine->setMinimumSize(QSize(250, 26));
        nameLine->setMaxLength(8); //限制输入八位
        nameLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        accLine = new QLineEdit(frame);
        accLine->setObjectName(QString::fromUtf8("accLine"));
        accLine->setGeometry(QRect(210, 230, 250, 26));
        accLine->setMinimumSize(QSize(250, 26));
        accLine->setMaxLength(8); //限制输入八位
        accLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pAsswordLine = new QLineEdit(frame);
        pAsswordLine->setObjectName(QString::fromUtf8("pAsswordLine"));
        pAsswordLine->setGeometry(QRect(210, 270, 250, 26));
        pAsswordLine->setMinimumSize(QSize(250, 26));
        pAsswordLine->setMaxLength(8); //限制输入八位
        pAsswordLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        checkPasswordLine = new QLineEdit(frame);
        checkPasswordLine->setObjectName(QString::fromUtf8("checkPasswordLine"));
        checkPasswordLine->setGeometry(QRect(210, 310, 250, 26));
        checkPasswordLine->setMinimumSize(QSize(250, 26));
        checkPasswordLine->setMaxLength(8); //限制输入八位
        checkPasswordLine->setStyleSheet(QString::fromUtf8("background-color: rgb(226, 226, 226);\n"
            "font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        accENDBtn = new QPushButton(frame);
        accENDBtn->setObjectName(QString::fromUtf8("accENDBtn"));
        accENDBtn->setGeometry(QRect(490, 360, 100, 30));
        accENDBtn->setMaximumSize(QSize(16777215, 16777215));

        //规范化输入
        pAsswordLine->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
        checkPasswordLine->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
        accLine->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));    //  账号注册只允许数字，字母账号为管理员需要手动添加
        //------

        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        accENDBtn->setFont(font);

        retranslateUi(RegAccMenu);
        QObject::connect(backBtn, SIGNAL(clicked()), RegAccMenu, SLOT(close()));

        QMetaObject::connectSlotsByName(RegAccMenu);
    } // setupUi

    void retranslateUi(QWidget* RegAccMenu)
    {
        RegAccMenu->setWindowTitle(QCoreApplication::translate("RegAccMenu", "RegAccMenu", nullptr));
        backBtn->setText(QString());
        nameText->setText(QCoreApplication::translate("RegAccMenu", "\345\247\223\345\220\215", nullptr));
        checkPassword->setText(QCoreApplication::translate("RegAccMenu", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pAssword->setText(QCoreApplication::translate("RegAccMenu", "\345\257\206\347\240\201", nullptr));
        accText->setText(QCoreApplication::translate("RegAccMenu", "\350\264\246\345\217\267", nullptr));
        nameLine->setPlaceholderText(QCoreApplication::translate("RegAccMenu", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        accLine->setPlaceholderText(QCoreApplication::translate("RegAccMenu", "\350\257\267\350\276\223\345\205\245\345\205\253\344\275\215\346\225\260\345\255\227", nullptr));
        pAsswordLine->setPlaceholderText(QCoreApplication::translate("RegAccMenu", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201,8\344\275\215\344\273\245\344\270\213 \351\231\220A-z,\346\225\260\345\255\227", nullptr));
        checkPasswordLine->setPlaceholderText(QCoreApplication::translate("RegAccMenu", "\350\257\267\351\207\215\345\244\215\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        accENDBtn->setText(QCoreApplication::translate("RegAccMenu", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegAccMenu : public Ui_RegAccMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REGACCMENUTCOZFH_H
