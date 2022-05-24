#include "ScoreSearchWindow.h"

ScoreSearchWindow::ScoreSearchWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//关闭菜单的最小化键
}

ScoreSearchWindow::~ScoreSearchWindow()
{
}
