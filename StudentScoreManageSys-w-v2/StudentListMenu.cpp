#include "StudentListMenu.h"

StudentListMenu::StudentListMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

StudentListMenu::~StudentListMenu()
{

}
