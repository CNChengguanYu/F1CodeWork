#include "ScoreSearchWindow.h"

ScoreSearchWindow::ScoreSearchWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

ScoreSearchWindow::~ScoreSearchWindow()
{
}
