/********************************************************************************
** Form generated from reading UI file 'IsContinueInBCrN.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ISCONTINUEINBCRN_H
#define ISCONTINUEINBCRN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IsContinue
{
public:
    QFrame* frame;
    QLabel* label;
    QPushButton* conBtn;
    QPushButton* backBtn;

    void setupUi(QWidget* IsContinue)
    {
        if (IsContinue->objectName().isEmpty())
            IsContinue->setObjectName(QString::fromUtf8("IsContinue"));
        IsContinue->resize(250, 100);
        QIcon icon;
        icon.addFile(QString::fromUtf8("img/Logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        IsContinue->setWindowIcon(icon);
        frame = new QFrame(IsContinue);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 250, 100));
        frame->setMinimumSize(QSize(250, 100));
        frame->setMaximumSize(QSize(250, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(95, 20, 72, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        conBtn = new QPushButton(frame);
        conBtn->setObjectName(QString::fromUtf8("conBtn"));
        conBtn->setGeometry(QRect(20, 50, 92, 28));
        backBtn = new QPushButton(frame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(140, 50, 92, 28));

        retranslateUi(IsContinue);
        QObject::connect(backBtn, SIGNAL(clicked()), IsContinue, SLOT(close()));

        QMetaObject::connectSlotsByName(IsContinue);
    } // setupUi

    void retranslateUi(QWidget* IsContinue)
    {
        IsContinue->setWindowTitle(QCoreApplication::translate("IsContinue", "\346\230\257\345\220\246\347\273\247\347\273\255", nullptr));
        label->setText(QCoreApplication::translate("IsContinue", "\346\230\257\345\220\246\347\273\247\347\273\255\357\274\237", nullptr));
        conBtn->setText(QCoreApplication::translate("IsContinue", "\347\273\247\347\273\255", nullptr));
        backBtn->setText(QCoreApplication::translate("IsContinue", "\345\220\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IsContinue : public Ui_IsContinue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ISCONTINUEINBCRN_H
