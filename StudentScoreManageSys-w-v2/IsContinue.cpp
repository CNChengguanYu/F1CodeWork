#include "IsContinue.h"

IsContinue::IsContinue(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

IsContinue::~IsContinue()
{
}
