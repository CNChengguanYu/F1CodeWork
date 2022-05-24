#include "SysMainMenu.h"
#include<QMouseEvent>		//鼠标模块
#include<QPushButton>
#include "ui_SysMainMenu.h"
#include"ScoreDeleteWindow.h"
SysMainMenu::SysMainMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框
	//QPushButton* ScoreINBtn = new QPushButton();
    QPushButton* sib = ui.DeleteScoreBtn;
	ScoreDeleteWindow* SDL = new ScoreDeleteWindow;
    connect(sib,&QPushButton::clicked,SDL,&ScoreDeleteWindow::show);
	//SLM.show();
	
}

SysMainMenu::~SysMainMenu()
{
}
void SysMainMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	} 
}
void SysMainMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
