#include "LoginMenu.h"
#include "ui_LoginMenu.h"
#include<QMouseEvent>		//���ģ��

LoginMenu::LoginMenu(QWidget *parent)
	: QWidget(parent)
{
	ui = new Ui::LoginMenu();
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�

	QPushButton* RGB = ui->regButton;       //ָ��ui��ע���
	QPushButton* LGB = ui->loginButton;		//ָ���¼��ť
	RegAccMenu* RAM = new RegAccMenu;		//������  ��ע��˵�

	connect(RGB, &QPushButton::clicked,RAM,&RegAccMenu::show);	//��ע��˵�
	connect(RGB, &QPushButton::clicked,this,&LoginMenu::close);	//��ע��˵���ر�������

	connect(RAM, &RegAccMenu::OpenLog, this, [=]() {ui->accountLine->setText(RAM->ReturnAcc()); show(); });		//�Ѿ����ע�ᣬ���˺���Ĭ������Ϊ����Ϊ��һ��ע���˺ţ��򿪵�¼�˵���
	connect(RAM, &RegAccMenu::DataOk, this, [=]() mutable {
		Acc = RAM->ReturnAcc();		//ֵ����
		Name = RAM->ReturnName();	//ֵ����
		Passw = RAM->ReturnPassword();//ֵ����
		DataIN(); });				//�����ź������˵���������

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
				LoginEd();  //��¼�ɹ�
				this->close();	//	�رյ�¼����
			}

		});

	

	//connect(RAM, &RegAccMenu::DataOk, this, &LoginMenu::DataIN);	//�����źŸ������˵�����������
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
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	}
}
void LoginMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}


