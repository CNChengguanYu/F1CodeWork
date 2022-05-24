#include "ScoreInWindow.h"
#include<QMouseEvent>		//鼠标模块
ScoreInWindow::ScoreInWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框
}

ScoreInWindow::~ScoreInWindow()
{
}

void ScoreInWindow::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	}
}

void ScoreInWindow::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
