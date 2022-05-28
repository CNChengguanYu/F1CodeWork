#pragma once

#include"LoginMenu.h"					//��¼�˵� 1
#include<QtDebug>
#include <QWidget>
#include "ui_SysMainMenu.h"
#include"ScoreListMenu.h"				//�ɼ��б�˵� 


class SysMainMenu : public QWidget
{
	Q_OBJECT

public:
	SysMainMenu(QWidget *parent = Q_NULLPTR);
	~SysMainMenu();
	void OpenLoginMenu();
private:
	Ui::SysMainMenu ui;  //����һ������ui������Ϊ~
	QPoint p;			//�������λ�õ�ָ��
	LoginMenu *LM = new LoginMenu;
	
	QString OnlineAcc = "";     //��ǰ�Ѿ��ɹ���¼���˺�

	QString Acc = "1";			//���µ�������ע�ᴫ����˺����ݣ��������Ķ�
	QString Name;
	QString Passw;
	QString iam = 0;
	

protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
