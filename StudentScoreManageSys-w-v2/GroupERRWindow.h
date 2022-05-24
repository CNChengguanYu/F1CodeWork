#pragma once

#include <QWidget>
#include "ui_GroupERRWindow.h"

class GroupERRWindow : public QWidget
{
	Q_OBJECT

public:
	GroupERRWindow(QWidget *parent = Q_NULLPTR);
	~GroupERRWindow();

private:
	Ui::GroupERRWindow ui;
};
