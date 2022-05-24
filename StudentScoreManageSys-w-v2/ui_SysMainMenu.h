#pragma once
/********************************************************************************
** Form generated from reading UI file 'SysMainMenuHSEzbt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SYSMAINMENUHSEZBT_H
#define SYSMAINMENUHSEZBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SysMainMenu
{
public:
    QFrame* frame;
    QPushButton* closeBtn;
    QPushButton* ScoreINBtn;
    QPushButton* ResetScoreBtn;
    QPushButton* ShowScoreBtn;
    QPushButton* DeleteScoreBtn;

    void setupUi(QWidget* SysMainMenu)
    {
        if (SysMainMenu->objectName().isEmpty())
            SysMainMenu->setObjectName(QString::fromUtf8("SysMainMenu"));
        SysMainMenu->resize(753, 516);
        SysMainMenu->setMinimumSize(QSize(600, 0));
        frame = new QFrame(SysMainMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 600, 400));
        frame->setMinimumSize(QSize(600, 400));
        frame->setMaximumSize(QSize(600, 400));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        closeBtn = new QPushButton(frame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(550, 0, 50, 30));
        closeBtn->setMinimumSize(QSize(50, 30));
        closeBtn->setMaximumSize(QSize(40, 30));
        closeBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/closeButton.png);"));
        ScoreINBtn = new QPushButton(frame);
        ScoreINBtn->setObjectName(QString::fromUtf8("ScoreINBtn"));
        ScoreINBtn->setGeometry(QRect(50, 30, 240, 160));
        ScoreINBtn->setMinimumSize(QSize(240, 160));
        ScoreINBtn->setMaximumSize(QSize(240, 160));
        ScoreINBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/ScoreInMenu.png);"));
        ResetScoreBtn = new QPushButton(frame);
        ResetScoreBtn->setObjectName(QString::fromUtf8("ResetScoreBtn"));
        ResetScoreBtn->setGeometry(QRect(310, 50, 240, 160));
        ResetScoreBtn->setMinimumSize(QSize(240, 160));
        ResetScoreBtn->setMaximumSize(QSize(240, 160));
        ResetScoreBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/ResetMenu.png);"));
        ShowScoreBtn = new QPushButton(frame);
        ShowScoreBtn->setObjectName(QString::fromUtf8("ShowScoreBtn"));
        ShowScoreBtn->setGeometry(QRect(50, 210, 240, 160));
        ShowScoreBtn->setMinimumSize(QSize(240, 160));
        ShowScoreBtn->setMaximumSize(QSize(240, 160));
        ShowScoreBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/ShowScoreMenu.png);"));
        DeleteScoreBtn = new QPushButton(frame);
        DeleteScoreBtn->setObjectName(QString::fromUtf8("DeleteScoreBtn"));
        DeleteScoreBtn->setGeometry(QRect(310, 230, 240, 160));
        DeleteScoreBtn->setMinimumSize(QSize(240, 160));
        DeleteScoreBtn->setMaximumSize(QSize(240, 160));
        DeleteScoreBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/DeleteScoreMenu.png);"));

        retranslateUi(SysMainMenu);
        QObject::connect(closeBtn, SIGNAL(clicked()), SysMainMenu, SLOT(close()));

        QMetaObject::connectSlotsByName(SysMainMenu);
    } // setupUi

    void retranslateUi(QWidget* SysMainMenu)
    {
        SysMainMenu->setWindowTitle(QCoreApplication::translate("SysMainMenu", "SysMainMenu", nullptr));
        closeBtn->setText(QString());
        ScoreINBtn->setText(QString());
        ResetScoreBtn->setText(QString());
        ShowScoreBtn->setText(QString());
        DeleteScoreBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SysMainMenu : public Ui_SysMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SYSMAINMENUHSEZBT_H
