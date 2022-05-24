#pragma once

#include <QWidget>
#include "ui_SysMainMenu.h"
#include"ScoreListMenu.h"				//成绩列表菜单 
class SysMainMenu : public QWidget
{
	Q_OBJECT

public:
	SysMainMenu(QWidget *parent = Q_NULLPTR);
	~SysMainMenu();

private:
	Ui::SysMainMenu ui;
	QPoint p;

protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
