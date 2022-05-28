#pragma once
/********************************************************************************
** Form generated from reading UI file 'IsScoreInWindowbiSJHv.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ISSCOREINWINDOWBISJHV_H
#define ISSCOREINWINDOWBISJHV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IsScoreInWindow
{
public:
    QFrame* frame;
    QTextBrowser* Info;
    QPushButton* YesBtn;
    QPushButton* NoBtn;

    void setupUi(QWidget* IsScoreInWindow)
    {
        if (IsScoreInWindow->objectName().isEmpty())
            IsScoreInWindow->setObjectName(QString::fromUtf8("IsScoreInWindow"));
        IsScoreInWindow->resize(280, 130);
        IsScoreInWindow->setMinimumSize(QSize(280, 130));
        IsScoreInWindow->setMaximumSize(QSize(280, 130));
        frame = new QFrame(IsScoreInWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 280, 130));
        frame->setMinimumSize(QSize(280, 130));
        frame->setMaximumSize(QSize(180, 130));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Info = new QTextBrowser(frame);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setGeometry(QRect(40, 10, 200, 80));
        YesBtn = new QPushButton(frame);
        YesBtn->setObjectName(QString::fromUtf8("YesBtn"));
        YesBtn->setGeometry(QRect(40, 95, 92, 28));
        NoBtn = new QPushButton(frame);
        NoBtn->setObjectName(QString::fromUtf8("NoBtn"));
        NoBtn->setGeometry(QRect(150, 95, 92, 28));

        retranslateUi(IsScoreInWindow);

        QMetaObject::connectSlotsByName(IsScoreInWindow);
    } // setupUi

    void retranslateUi(QWidget* IsScoreInWindow)
    {
        IsScoreInWindow->setWindowTitle(QCoreApplication::translate("IsScoreInWindow", "\346\243\200\346\237\245", nullptr));
        YesBtn->setText(QCoreApplication::translate("IsScoreInWindow", "\347\241\256\350\256\244", nullptr));
        NoBtn->setText(QCoreApplication::translate("IsScoreInWindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IsScoreInWindow : public Ui_IsScoreInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ISSCOREINWINDOWBISJHV_H
