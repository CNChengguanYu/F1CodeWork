#include"GroupERRWindow.h"

GroupERRWindow::GroupERRWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

GroupERRWindow::~GroupERRWindow()
{
}
