#include "LoginMenu.h"
#include "ui_LoginMenu.h"
#include<QMouseEvent>		//鼠标模块

LoginMenu::LoginMenu(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::LoginMenu();
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框

//	setAttribute(Qt::WA_TranslucentBackground);
	setFixedSize(600, 400);
}

LoginMenu::~LoginMenu()
{
	delete ui;
}

void LoginMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	}
}
void LoginMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}

