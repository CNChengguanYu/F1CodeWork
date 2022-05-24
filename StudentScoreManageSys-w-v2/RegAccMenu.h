#pragma once

#include <QWidget>
#include "ui_RegAccMenu.h"

class RegAccMenu : public QWidget
{
	Q_OBJECT

public:
	RegAccMenu(QWidget *parent = Q_NULLPTR);
	~RegAccMenu();

private:
	Ui::RegAccMenu ui;
	QPoint p;
protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
