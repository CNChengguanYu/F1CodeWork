#include "LoginMenu.h"
#include "ui_LoginMenu.h"
#include<QMouseEvent>		//鼠标模块

LoginMenu::LoginMenu(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::LoginMenu();
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框

	QPushButton* RGB = ui->regButton;       //指向ui的注册键
	QPushButton* LGB = ui->loginButton;		//指向登录按钮
	RegAccMenu* RAM = new RegAccMenu;		//测试用  打开注册菜单

	connect(RGB, &QPushButton::clicked,RAM,&RegAccMenu::show);	//打开注册菜单
	connect(RGB, &QPushButton::clicked,this,&LoginMenu::close);	//打开注册菜单后关闭主界面

	connect(RAM, &RegAccMenu::OpenLog, this, [=]() {ui->accountLine->setText(RAM->ReturnAcc()); show(); });		//已经完成注册，将账号栏默认设置为设置为上一个注册账号，打开登录菜单喵
	connect(RAM, &RegAccMenu::DataOk, this, [=]() mutable {
		Acc = RAM->ReturnAcc();		//值传递
		Name = RAM->ReturnName();	//值传递
		Passw = RAM->ReturnPassword();//值传递
		DataIN(); });				//触发信号让主菜单接受数据

	connect(LGB, &QPushButton::clicked, [=]()  mutable
		{
			LoginAcc = ui->accountLine->text();
		    LoginPass = ui->passwordLine->text();
			if (LoginAcc == "" || LoginPass == "") { Err.setUp(2); }
			LoginRun();
			if (!(TempPassword == LoginPass)) 
			{
				Err.setUp(3);
				ui->passwordLine->setText("");
			}
			else
			{
				LoginEd();  //登录成功
				this->close();	//	关闭登录界面
			}

		});

	

	//connect(RAM, &RegAccMenu::DataOk, this, &LoginMenu::DataIN);	//触发信号告诉主菜单接受数据喵
    //	setAttribute(Qt::WA_TranslucentBackground);



	setFixedSize(600, 400);
}

LoginMenu::~LoginMenu()
{
	delete ui;
}

void LoginMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	}
}
void LoginMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}


