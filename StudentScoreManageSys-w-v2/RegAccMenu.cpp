#include "RegAccMenu.h"
#include<QMouseEvent>		//鼠标模块
RegAccMenu::RegAccMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框
}

RegAccMenu::~RegAccMenu()
{
}

void RegAccMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	}
}

void RegAccMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
