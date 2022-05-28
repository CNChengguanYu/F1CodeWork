#pragma once
/********************************************************************************
** Form generated from reading UI file 'ErrTextWindowJaIplZ.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
#pragma  execution_character_set("utf-8")
#ifndef ERRTEXTWINDOWJAIPLZ_H
#define ERRTEXTWINDOWJAIPLZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ErrTextWindow
{
public:
    QFrame* frame;
    QPushButton* pushButton;
    QLabel* label;

    void setupUi(QWidget* ErrTextWindow)
    {
        if (ErrTextWindow->objectName().isEmpty())
            ErrTextWindow->setObjectName(QString::fromUtf8("ErrTextWindow"));
        ErrTextWindow->resize(200, 60);
        ErrTextWindow->setMinimumSize(QSize(200, 60));
        ErrTextWindow->setMaximumSize(QSize(200, 60));
        frame = new QFrame(ErrTextWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 200, 60));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 181, 28));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 181, 20));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ErrTextWindow);

        QMetaObject::connectSlotsByName(ErrTextWindow);
    } // setupUi

    void retranslateUi(QWidget* ErrTextWindow)
    {
        ErrTextWindow->setWindowTitle(QCoreApplication::translate("ErrTextWindow", "ERR!", nullptr));
        pushButton->setText(QCoreApplication::translate("ErrTextWindow", "\345\225\212\345\257\271\345\257\271\345\257\271", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ErrTextWindow : public Ui_ErrTextWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ERRTEXTWINDOWJAIPLZ_H
