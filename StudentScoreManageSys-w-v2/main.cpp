#include "StudentScoreManageSys.h"		//�����Դ� 1

#include <QtWidgets/QApplication>		//���ڿ� 1
#include"SysMainMenu.h"					//ϵͳ���˵� 1
//#include"LoginMenu.h"					//��¼�˵� 1
#include"GroupERRWindow.h"				//Ȩ���������ʾ���� 1
#include"IsContinue.h"					//���Ƿ���������� 1
#include"IsScoreInWindow.h"				//���Ƿ�¼�롱���� 1
#include"ScoreDeleteWindow.h"			//�ɼ�ɾ������ 1
#include"ScoreInWindow.h"				//�ɼ����봰�� 1

#include"StudentListMenu.h"				//ѧ���б�˵�
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
