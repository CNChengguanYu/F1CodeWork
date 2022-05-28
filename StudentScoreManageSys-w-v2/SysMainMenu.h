#pragma once

#include"LoginMenu.h"					//登录菜单 1
#include<QtDebug>
#include <QWidget>
#include "ui_SysMainMenu.h"
#include"ScoreListMenu.h"				//成绩列表菜单 


class SysMainMenu : public QWidget
{
	Q_OBJECT

public:
	SysMainMenu(QWidget *parent = Q_NULLPTR);
	~SysMainMenu();
	void OpenLoginMenu();
private:
	Ui::SysMainMenu ui;  //创建一个窗口ui，类型为~
	QPoint p;			//处理鼠标位置的指针
	LoginMenu *LM = new LoginMenu;
	
	QString OnlineAcc = "";     //当前已经成功登录的账号

	QString Acc = "1";			//以下的作用是注册传入的账号数据，请勿随便改动
	QString Name;
	QString Passw;
	QString iam = 0;
	

protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
