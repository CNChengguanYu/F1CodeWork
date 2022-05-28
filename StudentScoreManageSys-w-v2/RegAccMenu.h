#pragma once

#include<QtDebug>
#include <QWidget>
#include "ui_RegAccMenu.h"
#include "ErrTextWindow.h"

class RegAccMenu : public QWidget
{
	Q_OBJECT

public:
	RegAccMenu(QWidget *parent = Q_NULLPTR);
	~RegAccMenu();
	//QString getText()
	//{
	//	QString text = ui.accLine->text();						//����һ����������ֵ������������
	//	qDebug() << "s" << text.toStdString().data();			//������
	//	return text;
	//}
signals:
	void DataOk();			//��������ź�˵��������ϣ����԰����ݴ�����¼�˵���cpp�ļ���
public slots:

	QString getName();
	QString getAcc();
	QString getPassword();
	QString getCPassword();
	QString ReturnAcc() { return Acc; }	    //�����˺ŵ�ֵ��;
	QString ReturnName() { return Name; }	    //�����˺ŵ�ֵ��;
	QString ReturnPassword() { return Passw; }	    //�����˺ŵ�ֵ��;

private:
	Ui::RegAccMenu ui;
	QPoint p;
	ErrTextWindow Err;
	QString Acc = "";
	QString Name;
	QString Passw;
	QString CPassw;

signals:
	void OpenLog();	//	�����źţ����ڵ�����غ��ע�����
protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
