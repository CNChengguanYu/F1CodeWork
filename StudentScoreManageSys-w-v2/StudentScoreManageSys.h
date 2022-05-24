#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentScoreManageSys.h"

class StudentScoreManageSys : public QMainWindow
{
	Q_OBJECT

public:
	StudentScoreManageSys(QWidget *parent = Q_NULLPTR);

private:
	Ui::StudentScoreManageSysClass ui;
};
