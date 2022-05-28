#pragma once
/********************************************************************************
** Form generated from reading UI file 'StudentListMenufIvbby.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef STUDENTLISTMENUFIVBBY_H
#define STUDENTLISTMENUFIVBBY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentListMenu
{
public:
    QFrame* frame;
    QPushButton* backBtn;
    QTableView* tableView;
    QPushButton* pushButton;
    QLineEdit* lineEdit;

    void setupUi(QWidget* StudentListMenu)
    {
        if (StudentListMenu->objectName().isEmpty())
            StudentListMenu->setObjectName(QString::fromUtf8("StudentListMenu"));
        StudentListMenu->resize(660, 440);
        frame = new QFrame(StudentListMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 660, 440));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backBtn = new QPushButton(frame);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(0, 0, 50, 30));
        backBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/BackButton.png);"));
        tableView = new QTableView(frame);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 611, 411));
        tableView->setGridStyle(Qt::DashLine);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(595, 5, 50, 22));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(380, 5, 200, 22));

        retranslateUi(StudentListMenu);

        QMetaObject::connectSlotsByName(StudentListMenu);
    } // setupUi

    void retranslateUi(QWidget* StudentListMenu)
    {
        StudentListMenu->setWindowTitle(QCoreApplication::translate("StudentListMenu", "\345\255\246\347\224\237\345\220\215\345\215\225", nullptr));
        backBtn->setText(QString());
        pushButton->setText(QCoreApplication::translate("StudentListMenu", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentListMenu : public Ui_StudentListMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STUDENTLISTMENUFIVBBY_H
