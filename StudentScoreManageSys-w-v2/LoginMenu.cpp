#include "LoginMenu.h"
#include "ui_LoginMenu.h"
#include<QMouseEvent>		//���ģ��

LoginMenu::LoginMenu(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::LoginMenu();
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�

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
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	}
}
void LoginMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}

