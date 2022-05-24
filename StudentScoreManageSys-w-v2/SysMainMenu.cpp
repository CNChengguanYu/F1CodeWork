#include "SysMainMenu.h"
#include<QMouseEvent>		//���ģ��
#include<QPushButton>
#include "ui_SysMainMenu.h"
#include"ScoreDeleteWindow.h"
SysMainMenu::SysMainMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�
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
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	} 
}
void SysMainMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
