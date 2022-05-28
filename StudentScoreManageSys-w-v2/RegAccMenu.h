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
	//	QString text = ui.accLine->text();						//创建一个变量，赋值输入栏的内容
	//	qDebug() << "s" << text.toStdString().data();			//调试用
	//	return text;
	//}
signals:
	void DataOk();			//触发这个信号说明输入完毕，可以把数据传到登录菜单的cpp文件喵
public slots:

	QString getName();
	QString getAcc();
	QString getPassword();
	QString getCPassword();
	QString ReturnAcc() { return Acc; }	    //返回账号的值喵;
	QString ReturnName() { return Name; }	    //返回账号的值喵;
	QString ReturnPassword() { return Passw; }	    //返回账号的值喵;

private:
	Ui::RegAccMenu ui;
	QPoint p;
	ErrTextWindow Err;
	QString Acc = "";
	QString Name;
	QString Passw;
	QString CPassw;

signals:
	void OpenLog();	//	发出信号，用于点击返回后打开注册界面
protected:
	void mouseMoveEvent(QMouseEvent* e);		//移动窗口
	void mousePressEvent(QMouseEvent* e);		//移动窗口
};
