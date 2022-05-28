#pragma once

#include"ErrTextWindow.h"
#include <QWidget>
#include"RegAccMenu.h"
namespace Ui { class LoginMenu; };

class LoginMenu : public QWidget
{
	Q_OBJECT

public:
	LoginMenu(QWidget *parent = Q_NULLPTR);
	~LoginMenu();
public slots:
	QString ReturnAcc() { return Acc; }	    //�����˺ŵ�ֵ��;
	QString ReturnLAcc() { return LoginAcc; }	    //�����˺ŵ�ֵ(��¼����˺�)��;
	QString ReturnName() { return Name; }	    //�����˺ŵ�ֵ��;
	QString ReturnPassword() { return Passw; }	    //�����˺ŵ�ֵ��;
	void SetTempPass(QString in) { TempPassword = in; }
signals:
	void DataIN();			//��������ź�˵�������Ѿ�����¼ҳ����������һ��Ҫ�������˵������ݿ�����
	void LoginRun();		//�����ź��ò˵������˺� ����
	void LoginEd();			//��������ź�˵���Ѿ���¼�ɹ�����ʾ���˵���ȡ��ǰ�Ѿ���¼���˺ţ�
private:
	Ui::LoginMenu *ui;
	QPoint p;	//���ָ��
	QString Acc = "";
	QString Name;
	QString Passw;
	ErrTextWindow Err;
	QString LoginAcc;
	QString LoginPass;
	QString TempPassword="";  //�����ڻ᷵��һ�����룬���ں�LoginPass�˶ԣ������ͬ��˵����¼�ɹ�
	
protected:
	void mouseMoveEvent(QMouseEvent* e);		//�ƶ�����
	void mousePressEvent(QMouseEvent* e);		//�ƶ�����
};
