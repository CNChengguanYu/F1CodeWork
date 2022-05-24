#include "IsScoreInWindow.h"

IsScoreInWindow::IsScoreInWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//关闭菜单的最小化键
}

IsScoreInWindow::~IsScoreInWindow()
{
}
