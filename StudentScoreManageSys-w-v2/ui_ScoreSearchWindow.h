/********************************************************************************
** Form generated from reading UI file 'ScoreSearchWindowTcixKP.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SCORESEARCHWINDOWTCIXKP_H
#define SCORESEARCHWINDOWTCIXKP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreSearchWindow
{
public:
    QFrame* frame;
    QTextEdit* textEdit;

    void setupUi(QWidget* ScoreSearchWindow)
    {
        if (ScoreSearchWindow->objectName().isEmpty())
            ScoreSearchWindow->setObjectName(QString::fromUtf8("ScoreSearchWindow"));
        ScoreSearchWindow->resize(205, 104);
        frame = new QFrame(ScoreSearchWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 200, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 5, 161, 91));

        retranslateUi(ScoreSearchWindow);

        QMetaObject::connectSlotsByName(ScoreSearchWindow);
    } // setupUi

    void retranslateUi(QWidget* ScoreSearchWindow)
    {
        ScoreSearchWindow->setWindowTitle(QCoreApplication::translate("ScoreSearchWindow", "\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScoreSearchWindow : public Ui_ScoreSearchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SCORESEARCHWINDOWTCIXKP_H
