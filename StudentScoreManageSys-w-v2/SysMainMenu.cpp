/*
##########################################################
	                       变量表
=========================================================	

	   SIB    指向成绩输入按钮的指针
	   RSB	  指向重设输入按钮的指针
	   SSB    指向查询输入按钮的指针
	   DSB    指向删除输入按钮的指针
	   SLM	  成绩列表的窗口，所有功能都要靠这个实现
	   LM     登录窗口

#########################################################
*/

#include "SysMainMenu.h"
#include<QMouseEvent>		//鼠标模块
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>

SysMainMenu::SysMainMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);				//初始化Ui
	QSqlDatabase db; //创建数据库db	
	db = QSqlDatabase::addDatabase("QSQLITE");  //数据库类型为"QSQLITE"
	db.setDatabaseName("data.db");				//依次为数据库名，主机名，数据库账号，数据库密码;
	db.setHostName("pc");
	db.setUserName("Admin");
	db.setPassword("123456");
	db.open();									//打开数据库进行操作
	qDebug() << "便宜代码嗯造（数据库初始化完成）";

	/*---------------------------创建数据表-------------------------------------*/
	QSqlQuery sql(db);							//连接操作器
	QString TableInfo = "CREATE TABLE User(Account int primary key,\
						StudentName varchar(16),\
						IsAdmin BOOLEAN,\
						Password int)";    //定义了表元素喵。  分别是  INT 账号（主键是唯一的喵）, STRING 学生姓名，BOOL 是/否管理员权限(默认为0喵) ,INT 密码
	bool IsAddTable = sql.exec(TableInfo);	//看看输入是否成功了喵
	if (IsAddTable) { qDebug() << "创建成功了喵OwO"; }
	else { qDebug() << "创建失败了喵(o_ _)ﾉ(。﹏。)"; qDebug() << "好似喵(　^ω^)";
	}
	/*---------------------------创建数据表-------------------------------------*/

	connect(LM, &LoginMenu::DataIN, this, [=]()mutable  //接收到输入信号，将传入的数值赋值，然后存入数据库中
		{
				Acc = LM->ReturnAcc();     
				Name = LM->ReturnName();	    
				Passw = LM->ReturnPassword(); 	     
				QString Db_in = QString("INSERT INTO User(Account,StudentName,IsAdmin,Password) values('%1','%2','%3','%4')").arg(Acc, Name, iam, Passw);
				//定义一个SQL语句，目的为    向表格      User()    输入数据 占位符：1.2.3.4，由arg函数依次替代赋值
				sql.exec(Db_in);
				//让执行器执行sql语句
		});


	//qDebug() << "111";
	//QString textacc = "321";
	//QString textpassw = "222";
	QString select_all_sql = "select * from User";  //查询表User 的所有内容
	sql.prepare(select_all_sql);
	connect(LM, &LoginMenu::LoginRun, this, [=]()mutable
		{
			/*登录菜单发出登录按钮的信号后，这里会查询数据库找出与当前账号栏对应账号的密码，返回。如果返回密码和密码栏不等，则说明密码错误*/
			QString TempAcc= LM->ReturnLAcc();			//返回当前账号框的账号
			if (!sql.exec())					//打不开报错
			{
				qDebug() << sql.lastError();
			}
			else
			{
				while (sql.next()) 
				{								  //遍历数据库账号的行数列
					QString id = sql.value(0).toString();		     //获取该行的0元素（ACC）
					QString Password = sql.value(3).toString();      //获取该行的3元素（PAssword）
					qDebug() << QString("id:%1  pass:%2").arg(id).arg(Password);		//测试用
					//如果一行的账号和当前登录框的账号相同，则返回这一行的密码元素用来和登录框的密码比对
					if ((id == TempAcc)) { LM->SetTempPass(Password);  qDebug() << "登录成功！"; break; }		//返回密码，跳出循环
				}
			}
		});



	QPushButton* SIB = ui.ScoreINBtn;			//创建一个成绩输入按钮,指向ui的输入按钮
	QPushButton* RSB = ui.ResetScoreBtn;		//创建一个重设按钮,指向ui的重设按钮
	QPushButton* SSB = ui.ShowScoreBtn;			//创建一个展示按钮,指向ui的展示按钮
	QPushButton* DSB = ui.DeleteScoreBtn;		//创建一个删除按钮,指向ui的删除按钮
	ScoreListMenu* SLM = new ScoreListMenu;		//创建一个学生成绩列表菜单（仅供测试）


	connect(LM, &LoginMenu::LoginEd, this, [=]()mutable 
		{
			this->show();
			OnlineAcc = LM->ReturnLAcc();
			QString Name;
							/*下面是获取当前账号姓名的模块，不知道为什么不能整合到一个函数里，有空仔细研究下*/
				if (!sql.exec())					//打不开报错
				{
					qDebug() << sql.lastError();
				}
				else
				{
					while (sql.next())
					{								  //遍历数据库账号的行数列
						QString id = sql.value(0).toString();		     //获取该行的0元素（ACC）
						QString name = sql.value(1).toString();          //获取该行的3元素（name）
						if ((id == OnlineAcc)) { Name = name; break; }		//返回密码，跳出循环
					}
				}
			QString outText = QString("欢迎，%1").arg(Name);
			ui.label->setText(outText);
			connect(SIB, &QPushButton::clicked, SLM, &ScoreListMenu::show);   //点击 输入按钮后，打开成绩菜单进行操作
			connect(RSB, &QPushButton::clicked, SLM, &ScoreListMenu::show);   //点击 修改按钮后，打开成绩菜单进行操作
			connect(SSB, &QPushButton::clicked, SLM, &ScoreListMenu::show);   //点击 展示按钮后，打开成绩菜单进行操作
			connect(DSB, &QPushButton::clicked, SLM, &ScoreListMenu::show);   //点击 删除按钮后，打开成绩菜单进行操作

			qDebug() << OnlineAcc;
		});


	
	

	LM->show();
	




	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//设置无边框


	//   实际上，普通用户都需要开启成绩菜单后开始操作,因此4个按钮都要打开成绩菜单（admin需要先打开学生菜单选择）  //

	

	//ScoreDeleteWindow* SDL = new ScoreDeleteWindow;
   //connect(sib,&QPushButton::clicked,SDL,&ScoreDeleteWindow::show);


	//SLM.show();
	
}

SysMainMenu::~SysMainMenu()
{
}
void SysMainMenu::OpenLoginMenu()
{
	LM->show();
}



void SysMainMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//移到左上角
		move(e->globalPos() - p);
	} 
}
void SysMainMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//求坐标差值
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
