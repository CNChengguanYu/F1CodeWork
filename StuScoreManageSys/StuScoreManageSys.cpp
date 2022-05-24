/*
							###############################################################################
							#				  AIIT 软件工程2106 期末作业 #学生成绩备忘录V1.0				      #
							#-----------------------------------------------------------------------------#
							#				    ||小组成员：钟华洋||张益铭||魏宇辰     ||	                  #
							#                   ||           2022/5/10	     	  ||		    		  #
							###############################################################################
*/
#include"Student.h"

void ShowMenu() 
{
	//system("cls");
	cout << "【1】录入信息" << endl;
	cout << "【2】修改信息" << endl;
	cout << "【3】查询信息" << endl;
	cout << "【4】删除信息" << endl;
	cout << "【5】退出系统" << endl;
}
int main() 
{
	
	string TempName;
	cout << "请输入学生姓名：" << endl;
	cin >> TempName;
	Student User(TempName);				//实例化
	cout << "欢迎" <<TempName<<"同学使用管理系统！" << endl;
	while (1)
	{
		int Mode;
		ShowMenu();
		cin >> Mode;
		switch (Mode)
		{
		case 1:
			User.Score_IN();
			break;
		case 2:
			User.ResetInfo();
			break;
		case 3:
			User.Show_Std_ScoreList();
			break;	
		case 4:
			User.DeleteInfo();
			break;
		case 5:
			break;
		default:
			cout << "输入错误！请重新输入" << endl;
			CS;
			continue;
			break;
		}
		if (Mode == 5) break;
	}
	//string TempName = "tester";
	//Student User(TempName);
	//User.Score_IN();
	////User.ResetInfo();
	//User.DeleteInfo();
	//User.Show_Std_ScoreList();
	return 0;
}