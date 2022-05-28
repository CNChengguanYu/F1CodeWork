#pragma  execution_character_set("utf-8")
#include "ScoreListMenu.h"
#include <QtDebug>
ScoreListMenu::ScoreListMenu(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);


	this->setFixedSize(660, 440);
	int ScoreDataNum = 10;				  //测试用，访问数据库获取数据条数，赋值给表格函数作为表格行数
	this->setWindowIcon(QIcon(":/StudentScoreManageSys/img/Logo.ico"));		//设置窗口图标
	this->setWindowFlags(Qt::WindowCloseButtonHint);						//关闭菜单的最小化键
	connect(ui.backBtn, &QPushButton::clicked,this,&ScoreListMenu::close);  //返回按键
	QPushButton* btn1 = new QPushButton;
	QPushButton* btn2 = new QPushButton;
	/*-------------------------------------表格设置初始化---------------------------------------------*/
	ui.list = new QTableWidget(ScoreDataNum, 5, this);						//设置表头，行数，列数，父对象
	ui.list->resize(611, 411);												//大小
	ui.list->move(50, 40);													//位置
	ui.list->setColumnWidth(0, 200);//设置表头长度
	ui.list->setColumnWidth(1, 90);//设置表头长度
	ui.list->setColumnWidth(2, 130);//设置表头长度
	ui.list->setColumnWidth(3, 50);//设置表头长度
	ui.list->setColumnWidth(4, 50);//设置表头长度
	ui.list->setAlternatingRowColors(true);									//表格背景颜色交错
	ui.list->setStyleSheet("background: rgb(223,223,223);");
	ui.list->setEditTriggers(QAbstractItemView::NoEditTriggers);							 //设置表格内容不可编辑
	ui.list->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);					//设置单元格不可拖动
	ui.list->setSelectionMode(QAbstractItemView::NoSelection);		                        //设置不可选
	ui.list->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选择行为，以行为单位  
	ui.list->setSelectionMode(QAbstractItemView::SingleSelection);                            //设置选择模式，选择单行  
	ui.list->setHorizontalHeaderLabels(QStringList() << "科目名称" << "分数" << "日期" << " "<<" ");//列表头文字
	int i = 0;
	//qDebug() << "s";

																				//更新预期
	QPushButton *test[1000];														//以后会通过迭代器（vector），存储指针
	for (int i = 0; i < ScoreDataNum; i++)									    //循环名单个数
	{
		QPushButton* rebt = new QPushButton(" ");								//创建按钮指针
		QPushButton* dlbt = new QPushButton(" ");
		dlbt->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/closeButton.png);"));//按钮图标
		rebt->setStyleSheet(QString::fromUtf8("border-image: url(:/StudentScoreManageSys/img/ResetBtn.png);"));//按钮图标
		test[i] = dlbt;															//将创建的指针存入迭代器，起到保存的作用
		ui.list->setCellWidget(i, 3, rebt);										//存入单元格中
		ui.list->setCellWidget(i, 4, dlbt);
	}
	/*---------------------------------------------------------------------------------------------*/
	connect(test[2], &QPushButton::clicked, this, &ScoreListMenu::close);//对应的指针作为信号
	//原理：首先创建一个指针迭代器，用于存储每个按钮对应的指针。在每一次循环中（共计行数次），都会新建一个指针指向按钮，然后存入到迭代器-》存入到行元素中。每次执行完毕都绘制了一行的按钮，
	//执行完毕后，内存被释放，故原指针失效，进入下一次循环，直到填满所有行
	//在循环体外部，使用迭代器确定按钮的指针，作为信号发起者，来达到确定每一个行信息的目的.迭代器是队列存储，所以指针指向的行号在迭代器内的位置等于编号。
	//时间复杂度、空间复杂度都较高，不是最优解   ！update ！

}

ScoreListMenu::~ScoreListMenu()
{
}


