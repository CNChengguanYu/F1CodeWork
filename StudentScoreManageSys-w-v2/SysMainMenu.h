#pragma once

#include <QWidget>
#include "ui_SysMainMenu.h"
#include"ScoreListMenu.h"				//�ɼ��б�˵� 
class SysMainMenu : public QWidget
{
	Q_OBJECT

public:
	SysMainMenu(QWidget *parent = Q_NULLPTR);
	~SysMainMenu();

private:
	Ui::SysMainMenu ui;
	QPoint p;

protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
