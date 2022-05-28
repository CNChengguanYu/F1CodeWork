#include "StudentScoreManageSys.h"		//程序自带 1

#include <QtWidgets/QApplication>		//窗口库 1
#include"SysMainMenu.h"					//系统主菜单 1
//#include"LoginMenu.h"					//登录菜单 1
#include"GroupERRWindow.h"				//权限组错误提示窗口 1
#include"IsContinue.h"					//“是否继续”窗口 1
#include"IsScoreInWindow.h"				//“是否录入”窗口 1
#include"ScoreDeleteWindow.h"			//成绩删除窗口 1
#include"ScoreInWindow.h"				//成绩输入窗口 1

#include"StudentListMenu.h"				//学生列表菜单
#include"ScoreSearchWindow.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//StudentScoreManageSys w;
	//w.show();
//	LoginMenu l;
	//l.show();
	SysMainMenu SMM;
	//sm.OpenLoginMenu();
//	sm.show();
	//RegAccMenu ram;
	//ram.show();
	//GroupERRWindow gem;
	//gem.show();
	//IsContinue ic;
	//ic.show();
	//IsScoreInWindow isiw;
	//isiw.show();
	//ScoreDeleteWindow sdw;
	//sdw.show();
	//ScoreInWindow siw;
	//siw.show();
	//ScoreListMenu slm;
	//slm.show();
	//StudentListMenu stlm;
	//stlm.show();
	//ScoreSearchWindow ssw;
	//ssw.show();
	return a.exec();
}
