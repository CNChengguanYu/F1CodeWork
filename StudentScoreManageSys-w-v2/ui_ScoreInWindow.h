#pragma once
/********************************************************************************
** Form generated from reading UI file 'ScoreInWindoweKpWVL.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SCOREINWINDOWEKPWVL_H
#define SCOREINWINDOWEKPWVL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreInWindow
{
public:
    QFrame* frame;
    QLabel* scoreText;
    QLabel* SubNameText;
    QLineEdit* scoreLine;
    QLineEdit* SubNameLine;
    QPushButton* InBtn;
    QPushButton* closeBtn;

    void setupUi(QWidget* ScoreInWindow)
    {
        if (ScoreInWindow->objectName().isEmpty())
            ScoreInWindow->setObjectName(QString::fromUtf8("ScoreInWindow"));
        ScoreInWindow->resize(360, 150);
        frame = new QFrame(ScoreInWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 360, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scoreText = new QLabel(frame);
        scoreText->setObjectName(QString::fromUtf8("scoreText"));
        scoreText->setGeometry(QRect(30, 20, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        scoreText->setFont(font);
        SubNameText = new QLabel(frame);
        SubNameText->setObjectName(QString::fromUtf8("SubNameText"));
        SubNameText->setGeometry(QRect(30, 60, 81, 31));
        SubNameText->setFont(font);
        scoreLine = new QLineEdit(frame);
        scoreLine->setObjectName(QString::fromUtf8("scoreLine"));
        scoreLine->setGeometry(QRect(130, 25, 200, 26));
        SubNameLine = new QLineEdit(frame);
        SubNameLine->setObjectName(QString::fromUtf8("SubNameLine"));
        SubNameLine->setGeometry(QRect(130, 65, 200, 26));
        InBtn = new QPushButton(frame);
        InBtn->setObjectName(QString::fromUtf8("InBtn"));
        InBtn->setGeometry(QRect(30, 110, 120, 30));
        closeBtn = new QPushButton(frame);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(210, 110, 120, 30));

        retranslateUi(ScoreInWindow);
        QObject::connect(closeBtn, SIGNAL(clicked()), ScoreInWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(ScoreInWindow);
    } // setupUi

    void retranslateUi(QWidget* ScoreInWindow)
    {
        ScoreInWindow->setWindowTitle(QCoreApplication::translate("ScoreInWindow", "ScoreInWindow", nullptr));
        scoreText->setText(QCoreApplication::translate("ScoreInWindow", "\346\210\220\347\273\251", nullptr));
        SubNameText->setText(QCoreApplication::translate("ScoreInWindow", "\347\247\221\347\233\256\345\220\215\347\247\260", nullptr));
        scoreLine->setPlaceholderText(QCoreApplication::translate("ScoreInWindow", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\214\346\210\220\347\273\251\342\210\210[0,150]", nullptr));
        SubNameLine->setPlaceholderText(QCoreApplication::translate("ScoreInWindow", "\350\276\223\345\205\245\347\247\221\347\233\256\345\220\215\347\247\260\357\274\214\351\231\22016\344\270\252\345\255\227\347\254\246", nullptr));
        InBtn->setText(QCoreApplication::translate("ScoreInWindow", "\345\275\225\345\205\245", nullptr));
        closeBtn->setText(QCoreApplication::translate("ScoreInWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScoreInWindow : public Ui_ScoreInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SCOREINWINDOWEKPWVL_H
