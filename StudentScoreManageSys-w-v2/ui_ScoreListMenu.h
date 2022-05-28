/********************************************************************************
** Form generated from reading UI file 'ScoreListMenuNiZbyZ.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SCORELISTMENUNIZBYZ_H
#define SCORELISTMENUNIZBYZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreListMenu
{
public:
    QFrame* frame;
    QLabel* eduExpText;
    QComboBox* comboBox;
    QPushButton* backBtn;
    QLineEdit* lineEdit;
    QPushButton* pushButton;
    QTableWidget* list;
    QPushButton* AddBtn;

    void setupUi(QWidget* ScoreListMenu)
    {
        if (ScoreListMenu->objectName().isEmpty())
            ScoreListMenu->setObjectName(QString::fromUtf8("ScoreListMenu"));
        ScoreListMenu->resize(660, 440);
        frame = new QFrame(ScoreListMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 660, 440));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        eduExpText = new QLabel(frame);
        eduExpText->setObjectName(QString::fromUtf8("eduExpText"));
        eduExpText->setGeometry(QRect(60, 7, 41, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        eduExpText->setFont(font);
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(101, 5, 87, 22));
        backBtn = new QPushButton(frame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(0, 0, 50, 30));
        backBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/BackButton.png);"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(380, 5, 200, 22));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(595, 5, 50, 22));
        list = new QTableWidget(frame);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(50, 30, 611, 411));
        AddBtn = new QPushButton(frame);
        AddBtn->setObjectName(QString::fromUtf8("AddBtn"));
        AddBtn->setGeometry(QRect(5, 35, 40, 400));
        AddBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/AddBtn.png);"));
        retranslateUi(ScoreListMenu);

        QMetaObject::connectSlotsByName(ScoreListMenu);
    } // setupUi

    void retranslateUi(QWidget* ScoreListMenu)
    {
        ScoreListMenu->setWindowTitle(QCoreApplication::translate("ScoreListMenu", "\346\210\220\347\273\251\350\217\234\345\215\225", nullptr));
        eduExpText->setText(QCoreApplication::translate("ScoreListMenu", "\345\255\246\345\216\206", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ScoreListMenu", "\345\260\217\345\255\246", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ScoreListMenu", "\344\270\255\345\255\246", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ScoreListMenu", "\345\244\247\345\255\246", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("ScoreListMenu", "\345\205\266\344\273\226", nullptr));

        backBtn->setText(QString());
        pushButton->setText(QCoreApplication::translate("ScoreListMenu", "\346\220\234\347\264\242", nullptr));
#if QT_CONFIG(whatsthis)
        AddBtn->setWhatsThis(QCoreApplication::translate("ScoreListMenu", "<html><head/><body><p>\347\202\271\345\207\273\346\267\273\345\212\240\346\210\220\347\273\251</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        AddBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScoreListMenu : public Ui_ScoreListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SCORELISTMENUNIZBYZ_H
