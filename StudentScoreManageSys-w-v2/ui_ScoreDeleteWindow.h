#pragma once
/********************************************************************************
** Form generated from reading UI file 'ScoreDeleteWindowMmxSva.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SCOREDELETEWINDOWMMXSVA_H
#define SCOREDELETEWINDOWMMXSVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreDeleteWindow
{
public:
    QFrame* frame;
    QTextBrowser* Info;
    QPushButton* YesBtn;
    QPushButton* NoBtn;

    void setupUi(QWidget* ScoreDeleteWindow)
    {
        if (ScoreDeleteWindow->objectName().isEmpty())
            ScoreDeleteWindow->setObjectName(QString::fromUtf8("ScoreDeleteWindow"));
        ScoreDeleteWindow->resize(280, 130);
        ScoreDeleteWindow->setMinimumSize(QSize(280, 130));
        ScoreDeleteWindow->setMaximumSize(QSize(280, 130));
        ScoreDeleteWindow->setWindowTitle(QString::fromUtf8("\346\243\200\346\237\245"));
        frame = new QFrame(ScoreDeleteWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 280, 130));
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

        retranslateUi(ScoreDeleteWindow);

        QMetaObject::connectSlotsByName(ScoreDeleteWindow);
    } // setupUi

    void retranslateUi(QWidget* ScoreDeleteWindow)
    {
        YesBtn->setText(QCoreApplication::translate("ScoreDeleteWindow", "\347\241\256\350\256\244", nullptr));
        NoBtn->setText(QCoreApplication::translate("ScoreDeleteWindow", "\345\217\226\346\266\210", nullptr));
        (void)ScoreDeleteWindow;
    } // retranslateUi

};

namespace Ui {
    class ScoreDeleteWindow : public Ui_ScoreDeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SCOREDELETEWINDOWMMXSVA_H
