#include "RegAccMenu.h"
#include<QMouseEvent>		//���ģ��
RegAccMenu::RegAccMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�
}

RegAccMenu::~RegAccMenu()
{
}

void RegAccMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	}
}

void RegAccMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
