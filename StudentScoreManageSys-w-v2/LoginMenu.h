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
	QString ReturnAcc() { return Acc; }	    //返回账号的值喵;
	QString ReturnLAcc() { return LoginAcc; }	    //返回账号的值(登录框的账号)喵;
	QString ReturnName() { return Name; }	    //返回账号的值喵;
	QString ReturnPassword() { return Passw; }	    //返回账号的值喵;
	void SetTempPass(QString in) { TempPassword = in; }
signals:
	void DataIN();			//触发这个信号说明数据已经到登录页面了喵，下一步要传到主菜单存数据库了喵
	void LoginRun();		//触发信号让菜单返回账号 密码
	void LoginEd();			//触发这个信号说明已经登录成功，提示主菜单获取当前已经登录的账号；
private:
	Ui::LoginMenu *ui;
	QPoint p;	//鼠标指针
	QString Acc = "";
	QString Name;
	QString Passw;
	ErrTextWindow Err;
	QString LoginAcc;
	QString LoginPass;
	QString TempPassword="";  //主窗口会返回一个密码，用于和LoginPass核对，如果相同则说明登录成功
	
protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
