#include "RegAccMenu.h"
#include <QMouseEvent>		//鼠标模块

RegAccMenu::RegAccMenu(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框

	connect(ui.accENDBtn, &QPushButton::clicked, this,			//点击注册按钮后开始判断
		[=]()mutable {	


	    	Acc = getAcc(); 	//	这里以后要做个账号重复检查   ！！2022 5 28 update：设为主键后不需要检查了喵！！
			Name = getName();
			Passw = getPassword();
			CPassw = getCPassword();   
			if (QString::compare(Passw, CPassw, Qt::CaseInsensitive))				//判断输入密码是否一致
			{
				Err.setUp(1);														//打开错误窗口，代码为1；
				connect(&Err, &ErrTextWindow::Btn_clicked, this, [=]() {			//点击确定后关闭窗口和清空密码栏
					ui.pAsswordLine->setText("");
					ui.checkPasswordLine->setText(""); });
			}
			else if (Acc == 0 || Name == 0 || Passw == 0 || CPassw == 0)			//有一个数值为空
			{
				Err.setUp(2);												//打开错误窗口，代码为2
			}
			else 
			{	 
				Err.setUp(0);								                        	//代码为0是成功注册喵
				connect(&Err, &ErrTextWindow::Btn_clicked, this, [=]() mutable {
												DataOk();								//发送信号提示接收数据
												ui.accLine->setText("");
												ui.nameLine->setText("");
												ui.pAsswordLine->setText("");
												ui.checkPasswordLine->setText("");
												OpenLog();
												close(); });           //点击确认过后就清空输入栏喵,跳转到登录菜单喵，关闭注册菜单喵 
			}

		});
	connect(ui.backBtn, &QPushButton::clicked, this, &RegAccMenu::OpenLog);			//点击返回，打开登录菜单喵
	
}

RegAccMenu::~RegAccMenu()
{
}

void RegAccMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	}
}

void RegAccMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
QString RegAccMenu::getName() {
	QString text = ui.nameLine->text();						//    获取注册姓名
	qDebug() << "输入的姓名是" << text.toStdString().data();			
	return text;
}
QString RegAccMenu::getAcc() {								//    获取  注册账号
	QString acc = ui.accLine->text();
	qDebug() << "输入的账号是" << acc.toStdString().data();
	return acc;
}
QString RegAccMenu::getPassword() {
	QString text = ui.pAsswordLine->text();						//    获取密码
	qDebug() << "输入的密码是" << text.toStdString().data();			
	return text;
}
QString RegAccMenu::getCPassword() {						//    获取确认密码

	QString text = ui.checkPasswordLine->text();						
	qDebug() << "确认的密码是" << text.toStdString().data();			
	return text;
}