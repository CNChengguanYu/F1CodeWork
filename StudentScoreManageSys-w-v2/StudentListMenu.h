#pragma once

#include <QWidget>
#include "ui_StudentListMenu.h"

class StudentListMenu : public QWidget
{
	Q_OBJECT

public:
	StudentListMenu(QWidget *parent = Q_NULLPTR);
	~StudentListMenu();

private:
	Ui::StudentListMenu ui;
};
