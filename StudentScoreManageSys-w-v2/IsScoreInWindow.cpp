#include "IsScoreInWindow.h"

IsScoreInWindow::IsScoreInWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

IsScoreInWindow::~IsScoreInWindow()
{
}
