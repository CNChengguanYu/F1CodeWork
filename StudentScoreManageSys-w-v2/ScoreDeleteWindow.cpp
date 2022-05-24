#include "ScoreDeleteWindow.h"

ScoreDeleteWindow::ScoreDeleteWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//关闭菜单的最小化键
}

ScoreDeleteWindow::~ScoreDeleteWindow()
{
}
