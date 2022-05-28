#include "ErrTextWindow.h"
#include <QtDeBug>
ErrTextWindow::ErrTextWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);//�رղ˵�����С����
}

ErrTextWindow::~ErrTextWindow()
{
}

void ErrTextWindow::setUp(int Errcode)
{
	switch (Errcode)			//�������
	{
	case 0 :
		ui.label->setText("ע��ɹ�");
		setWindowTitle("û�д���");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//����ر�
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::Btn_clicked);//�򿪵�¼����
			break;
	case 1:						//�������벻һ��
		ui.label->setText("����������벻һ��");			
		setWindowTitle("ErrCode:1");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this,&ErrTextWindow::close);			//����ر�
		connect(ui.pushButton, &QPushButton::clicked, this,&ErrTextWindow::Btn_clicked);//�򿪵�¼����
		break;
	case 2:						//���벻����
		ui.label->setText("�������벻����");
		setWindowTitle("ErrCode:2");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//����ر�
		break;
	case 3:					//�˺Ż��������
		ui.label->setText("�˺Ż��������");
		setWindowTitle("ErrCode:3");
		this->show();
		connect(ui.pushButton, &QPushButton::clicked, this, &ErrTextWindow::close);			//����ر�
		break;
	default:
		break;
	}
	
}
