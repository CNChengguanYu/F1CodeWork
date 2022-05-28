#include "IsContinue.h"

IsContinue::IsContinue(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon(":/StudentScoreManageSys/img/Logo.ico"));
	this->setWindowFlags(Qt::WindowCloseButtonHint);//关闭菜单的最小化键
}

IsContinue::~IsContinue()
{
}
