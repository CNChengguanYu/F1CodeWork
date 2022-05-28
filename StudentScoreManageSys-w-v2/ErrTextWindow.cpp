#include "ErrTextWindow.h"
#include <QtDeBug>
ErrTextWindow::ErrTextWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//关闭菜单的最小化键
}

ErrTextWindow::~ErrTextWindow()
{
}

void ErrTextWindow::setUp(int Errcode)
{
	switch (Errcode)			//错误代码
	{
	case 0 :
		ui.label->setText("注册成功");
		setWindowTitle("没有错误");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//点击关闭
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::Btn_clicked);//打开登录界面
			break;
	case 1:						//两次输入不一致
		ui.label->setText("宁输入的密码不一致");			
		setWindowTitle("ErrCode:1");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this,&ErrTextWindow::close);			//点击关闭
		connect(ui.pushButton, &QPushButton::clicked, this,&ErrTextWindow::Btn_clicked);//打开登录界面
		break;
	case 2:						//输入不完整
		ui.label->setText("宁的输入不完整");
		setWindowTitle("ErrCode:2");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//点击关闭
		break;
	case 3:					//账号或密码错误
		ui.label->setText("账号或密码错误");
		setWindowTitle("ErrCode:3");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//点击关闭
		break;
	default:
		break;
	}
	
}
