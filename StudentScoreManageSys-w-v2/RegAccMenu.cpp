#include "RegAccMenu.h"
#include <QMouseEvent>		//���ģ��

RegAccMenu::RegAccMenu(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setFixedSize(600, 400);
	setWindowFlags(Qt::FramelessWindowHint | windowFlags());//�����ޱ߿�

	connect(ui.accENDBtn, &QPushButton::clicked, this,			//���ע�ᰴť��ʼ�ж�
		[=]()mutable {	


	    	Acc = getAcc(); 	//	�����Ժ�Ҫ�����˺��ظ����   ����2022 5 28 update����Ϊ��������Ҫ�����������
			Name = getName();
			Passw = getPassword();
			CPassw = getCPassword();   
			if (QString::compare(Passw, CPassw, Qt::CaseInsensitive))				//�ж����������Ƿ�һ��
			{
				Err.setUp(1);														//�򿪴��󴰿ڣ�����Ϊ1��
				connect(&Err, &ErrTextWindow::Btn_clicked, this, [=]() {			//���ȷ����رմ��ں����������
					ui.pAsswordLine->setText("");
					ui.checkPasswordLine->setText(""); });
			}
			else if (Acc == 0 || Name == 0 || Passw == 0 || CPassw == 0)			//��һ����ֵΪ��
			{
				Err.setUp(2);												//�򿪴��󴰿ڣ�����Ϊ2
			}
			else 
			{	 
				Err.setUp(0);								                        	//����Ϊ0�ǳɹ�ע����
				connect(&Err, &ErrTextWindow::Btn_clicked, this, [=]() mutable {
												DataOk();								//�����ź���ʾ��������
												ui.accLine->setText("");
												ui.nameLine->setText("");
												ui.pAsswordLine->setText("");
												ui.checkPasswordLine->setText("");
												OpenLog();
												close(); });           //���ȷ�Ϲ���������������,��ת����¼�˵������ر�ע��˵��� 
			}

		});
	connect(ui.backBtn, &QPushButton::clicked, this, &RegAccMenu::OpenLog);			//������أ��򿪵�¼�˵���
	
}

RegAccMenu::~RegAccMenu()
{
}

void RegAccMenu::mouseMoveEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�Ƶ����Ͻ�
		move(e->globalPos() - p);
	}
}

void RegAccMenu::mousePressEvent(QMouseEvent* e)
{
	if (e->buttons() & Qt::LeftButton)
	{
		//�������ֵ
		p = e->globalPos() - this->frameGeometry().topLeft();
	}
}
QString RegAccMenu::getName() {
	QString text = ui.nameLine->text();						//    ��ȡע������
	qDebug() << "�����������" << text.toStdString().data();			
	return text;
}
QString RegAccMenu::getAcc() {								//    ��ȡ  ע���˺�
	QString acc = ui.accLine->text();
	qDebug() << "������˺���" << acc.toStdString().data();
	return acc;
}
QString RegAccMenu::getPassword() {
	QString text = ui.pAsswordLine->text();						//    ��ȡ����
	qDebug() << "�����������" << text.toStdString().data();			
	return text;
}
QString RegAccMenu::getCPassword() {						//    ��ȡȷ������

	QString text = ui.checkPasswordLine->text();						
	qDebug() << "ȷ�ϵ�������" << text.toStdString().data();			
	return text;
}