#include "ScoreDeleteWindow.h"

ScoreDeleteWindow::ScoreDeleteWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

ScoreDeleteWindow::~ScoreDeleteWindow()
{
}
