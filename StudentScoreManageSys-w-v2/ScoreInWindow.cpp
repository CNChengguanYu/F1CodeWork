#include "ScoreInWindow.h"
#include<QMouseEvent>		//���ģ��
ScoreInWindow::ScoreInWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�
}

ScoreInWindow::~ScoreInWindow()
{
}

void ScoreInWindow::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	}
}

void ScoreInWindow::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
