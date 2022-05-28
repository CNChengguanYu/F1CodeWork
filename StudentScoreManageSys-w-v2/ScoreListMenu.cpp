#pragma  execution_character_set("utf-8")
#include "ScoreListMenu.h"
#include <QtDebug>
ScoreListMenu::ScoreListMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


	this->setFixedSize(660, 440);
	int ScoreDataNum = 10;				  //�����ã��������ݿ��ȡ������������ֵ���������Ϊ�������
	this->setWindowIcon(QIcon(":/StudentScoreManageSys/img/Logo.ico"));		//���ô���ͼ��
	this->setWindowFlags(Qt::WindowCloseButtonHint);						//�رղ˵�����С����
	connect(ui.backBtn, &QPushButton::clicked,this,&ScoreListMenu::close);  //���ذ���
	QPushButton* btn1 = new QPushButton;
	QPushButton* btn2 = new QPushButton;
	/*-------------------------------------������ó�ʼ��---------------------------------------------*/
	ui.list = new QTableWidget(ScoreDataNum, 5, this);						//���ñ�ͷ��������������������
	ui.list->resize(611, 411);												//��С
	ui.list->move(50, 40);													//λ��
	ui.list->setColumnWidth(0, 200);//���ñ�ͷ����
	ui.list->setColumnWidth(1, 90);//���ñ�ͷ����
	ui.list->setColumnWidth(2, 130);//���ñ�ͷ����
	ui.list->setColumnWidth(3, 50);//���ñ�ͷ����
	ui.list->setColumnWidth(4, 50);//���ñ�ͷ����
	ui.list->setAlternatingRowColors(true);									//��񱳾���ɫ����
	ui.list->setStyleSheet("background: rgb(223,223,223);");
	ui.list->setEditTriggers(QAbstractItemView::NoEditTriggers);							 //���ñ�����ݲ��ɱ༭
	ui.list->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);					//���õ�Ԫ�񲻿��϶�
	ui.list->setSelectionMode(QAbstractItemView::NoSelection);		                        //���ò���ѡ
	ui.list->setSelectionBehavior(QAbstractItemView::SelectRows); //����ѡ����Ϊ������Ϊ��λ  
	ui.list->setSelectionMode(QAbstractItemView::SingleSelection);                            //����ѡ��ģʽ��ѡ����  
	ui.list->setHorizontalHeaderLabels(QStringList() << "��Ŀ����" << "����" << "����" << " "<<" ");//�б�ͷ����
	int i = 0;
	//qDebug() << "s";

																				//����Ԥ��
	QPushButton *test[1000];														//�Ժ��ͨ����������vector�����洢ָ��
	for (int i = 0; i < ScoreDataNum; i++)									    //ѭ����������
	{
		QPushButton* rebt = new QPushButton(" ");								//������ťָ��
		QPushButton* dlbt = new QPushButton(" ");
		dlbt->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/closeButton.png);"));//��ťͼ��
		rebt->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/ResetBtn.png);"));//��ťͼ��
		test[i] = dlbt;															//��������ָ�������������𵽱��������
		ui.list->setCellWidget(i, 3, rebt);										//���뵥Ԫ����
		ui.list->setCellWidget(i, 4, dlbt);
	}
	/*---------------------------------------------------------------------------------------------*/
	connect(test[2], &QPushButton::clicked, this, &ScoreListMenu::close);//��Ӧ��ָ����Ϊ�ź�
	//ԭ�����ȴ���һ��ָ������������ڴ洢ÿ����ť��Ӧ��ָ�롣��ÿһ��ѭ���У����������Σ��������½�һ��ָ��ָ��ť��Ȼ����뵽������-�����뵽��Ԫ���С�ÿ��ִ����϶�������һ�еİ�ť��
	//ִ����Ϻ��ڴ汻�ͷţ���ԭָ��ʧЧ��������һ��ѭ����ֱ������������
	//��ѭ�����ⲿ��ʹ�õ�����ȷ����ť��ָ�룬��Ϊ�źŷ����ߣ����ﵽȷ��ÿһ������Ϣ��Ŀ��.�������Ƕ��д洢������ָ��ָ����к��ڵ������ڵ�λ�õ��ڱ�š�
	//ʱ�临�Ӷȡ��ռ临�Ӷȶ��ϸߣ��������Ž�   ��update ��

}

ScoreListMenu::~ScoreListMenu()
{
}


