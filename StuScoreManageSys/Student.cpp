#include "Student.h"
#define Y y
#define N n
int ComdNum = 0;//科目的下角标(操作数)
void Student::Score_IN()
{
	CS;
	int Level;
	cout << "【1】小学【2】中学【3】大学【4】其他" << endl;
	while (1) {				//这是一个输入模块，确定输入合法   !!!BUG!!!目前输入为字母时程序会出错
		Level = 0;
		cout << "请输入您的学习阶段：" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4) 
		{
			cout << "输入错误！请重新输入" << endl;
			continue;
		}
		break;
	}
	cout<<""<< endl;		//打印回车
	//while (1) 
	//{
		char inMode;//输入模式
		int score;//成绩
		string name;//科目名称

		switch (Level)		//确定学习阶段,1小2中3大4其他
		{
		case 1:
			while(1){				//如果进入小学
				ComdNum = Ps.ReturnComdNum();
				if (ComdNum >= 32) 
				{
					cout<<"可以储存的科目已满！" << endl;
					break;
				}
					cout << "是否输入成绩？(y/n)" << endl;
					cin >> inMode;
					if (inMode == 'N' || inMode == 'n') 
					{
						break; 
					}
					cout << "请输入您小学阶段的相关信息（成绩）（科目名称）" << endl;
					cin >> score >> name;
					Student::Ps.In_Sub(ComdNum, score, name);
					ComdNum++;
					//通过In_Sub函数访问科目，参数为；操作数，成绩，科目名称
				}

			break;
		case 2:
			while (1) {			//如果进入中学
				ComdNum = Ms.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "可以储存的科目已满！" << endl;
					break;
				}
				cout << "是否输入成绩？(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "请输入您中学阶段的相关信息（成绩）（科目名称）" << endl;
				cin >> score >> name;
				Student::Ms.In_Sub(ComdNum, score, name);
				ComdNum++;
				//通过In_Sub函数访问科目，参数为；操作数，成绩，科目名称
			}
			break;
		case 3:
			while (1) {			//如果进入大学
				ComdNum = Us.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "可以储存的科目已满！" << endl;
					break;
				}
				cout << "是否输入成绩？(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "请输入您大学阶段的相关信息（成绩）（科目名称）" << endl;
				cin >> score >> name;
				Student::Us.In_Sub(ComdNum, score, name);
				ComdNum++;
				//通过In_Sub函数访问科目，参数为；操作数，成绩，科目名称
			}
			break;
		case 4:
			while (1) {			//如果进入其他
				ComdNum = Other.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "可以储存的科目已满！" << endl;
					break;
				}
				cout << "是否输入成绩？(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "请输入您其他阶段的相关信息（成绩）（科目名称）" << endl;
				cin >> score >> name;
				Student::Other.In_Sub(ComdNum, score, name);
				ComdNum++;
				//通过In_Sub函数访问科目，参数为；操作数，成绩，科目名称
			}
			break;
		default:
			break;
		}
		//break;
	//}
	return;
}

void Student::ResetInfo()
{
	CS;
	int Level,ResetScore=-1,ResetNum;//重设编号
	string ResetName = " ";
	cout << "【1】小学【2】中学【3】大学【4】其他" << endl;
	while (1) {				//这是一个输入模块，确定输入合法   !!!BUG!!!目前输入为字母时程序会出错
		Level = 0;
		cout << "请输入您的要修改的学习阶段：" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4)
		{
			cout << "输入错误！请重新输入" << endl;
			continue;
		}
		break;
	}
	cout << "" << endl;		//打印回车
	switch (Level)
	{
	case 1:
		cout<<"这是您的小学成绩" << endl;
		Ps.ShowSubList();
		cout<<"请输入您要修改的成绩序列号" << endl;
		cin >> ResetNum;
		cout << "您要修改的是：" << endl;
		Ps.ShowOneSub(ResetNum);
		cout << "请输入修改后的信息（成绩）（名称）" << endl;
		cin >> ResetScore >> ResetName;
		Ps.In_Sub(ResetNum-1, ResetScore, ResetName);//数组！-1！
		break;
	case 2:
		cout << "这是您的中学成绩" << endl;
		Ms.ShowSubList();
		cout << "请输入您要修改的成绩序列号" << endl;
		cin >> ResetNum;
		cout << "您要修改的是：" << endl;
		Ms.ShowOneSub(ResetNum);
		cout << "请输入修改后的信息（成绩）（名称）" << endl;
		cin >> ResetScore >> ResetName;
		Ms.In_Sub(ResetNum - 1, ResetScore, ResetName);//数组！-1！(前台打印的标号是从1开始的)
		break;
	case 3:
		cout << "这是您的大学成绩" << endl;
		Us.ShowSubList();
		cout << "请输入您要修改的成绩序列号" << endl;
		cin >> ResetNum;
		cout << "您要修改的是：" << endl;
		Us.ShowOneSub(ResetNum);
		cout << "请输入修改后的信息（成绩）（名称）" << endl;
		cin >> ResetScore >> ResetName;
		Us.In_Sub(ResetNum - 1, ResetScore, ResetName);//数组！-1！
		break;
	case 4:
		cout << "这是您的其他成绩" << endl;
		Other.ShowSubList();
		cout << "请输入您要修改的成绩序列号" << endl;
		cin >> ResetNum;
		cout << "您要修改的是：" << endl;
		Other.ShowOneSub(ResetNum);
		cout << "请输入修改后的信息（成绩）（名称）" << endl;
		cin >> ResetScore >> ResetName;
		Other.In_Sub(ResetNum - 1, ResetScore, ResetName);//数组！-1！
		break;
	default:
		break;
	}

}

void Student::Show_Std_ScoreList()				//输出全部信息
{
	CS;
	cout << "这是您小学的信息" << endl;
	Ps.ShowSubList();
	cout << "小学阶段最终成绩评价为:" << Ps.EduEndScPoint()<< endl;
	cout << "这是您中学的信息" << endl;
	Ms.ShowSubList();
	cout << "中学阶段最终成绩评价为:" << Ms.EduEndScPoint() << endl;
	cout << "这是您大学的信息" << endl;
	Us.ShowSubList();
	cout << "大学阶段最终成绩评价为:" << Us.EduEndScPoint() << endl;
	cout << "这是您其他的信息" << endl;
	Other.ShowSubList();
	cout << "其他阶段最终成绩评价为:" << Other.EduEndScPoint() << endl;

}

void Student::DeleteInfo()
{
	CS;
	int Level,DelNum;
	cout << "【1】小学【2】中学【3】大学【4】其他" << endl;
	while (1) {				//这是一个输入模块，确定输入合法   !!!BUG!!!目前输入为字母时程序会出错
		Level = 0;
		cout << "请输入您要删除信息的的学习阶段：" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4)
		{
			cout << "输入错误！请重新输入" << endl;
			continue;
		}
		break;
	}
	cout << "" << endl;		//打印回车
	switch (Level)				//删除核心
	{
	case 1: 
		{
			Ps.ShowSubList();
			cout << "请输入您要删除的标号(如果需要退出，请输入0)" << endl;
			while (1)
			{
				cin >> DelNum;
				if (DelNum<0 || DelNum>Ps.ReturnComdNum())
				{
					cout << "输入错误，请重新输入" << endl;
					continue;
				}
				break;
			}
			if (DelNum == 0)break;
			int Num_of_time = Ps.ReturnComdNum() - DelNum;		//删除后需要交换的次数（原本的位置依次与后面交换）
			for (int comdNum = DelNum - 1; comdNum <= Num_of_time; comdNum++)
			{
				int sawp_Score = Ps.ReturnScore(comdNum+1);
				string sawp_Name = Ps.ReturnName(comdNum+1);
				Ps.In_Sub(comdNum, sawp_Score, sawp_Name);
				
			}		
		}
		break;
	case 2:
	{
		Ms.ShowSubList();
		cout << "请输入您要删除的标号(如果需要退出，请输入0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Ms.ReturnComdNum())
			{
				cout << "输入错误，请重新输入" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Ms.ReturnComdNum() - DelNum; //删除后需要交换的次数
		for (int comdNum = DelNum - 1; comdNum <= Num_of_time; comdNum++)
		{
			int sawp_Score = Ms.ReturnScore(comdNum + 1);
			string sawp_Name = Ms.ReturnName(comdNum + 1);
			Ms.In_Sub(comdNum, sawp_Score, sawp_Name);
		}
	}
		break;
	case 3:
	{
		Us.ShowSubList();
		cout << "请输入您要删除的标号(如果需要退出，请输入0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Us.ReturnComdNum())
			{
				cout << "输入错误，请重新输入" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Us.ReturnComdNum() - DelNum; //删除后需要交换的次数
		for (int comdNum = DelNum - 1; comdNum <= Num_of_time; comdNum++)
		{
			int sawp_Score = Us.ReturnScore(comdNum + 1);
			string sawp_Name = Us.ReturnName(comdNum + 1);
			Us.In_Sub(comdNum, sawp_Score, sawp_Name);
		}
	}
	break;
	case 4:
	{
		Other.ShowSubList();
		cout << "请输入您要删除的标号(如果需要退出，请输入0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Other.ReturnComdNum())
			{
				cout << "输入错误，请重新输入" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Other.ReturnComdNum() - DelNum; //删除后需要交换的次数
		for (int comdNum = DelNum - 1; comdNum <= Num_of_time; comdNum++)
		{
			int sawp_Score = Other.ReturnScore(comdNum + 1);
			string sawp_Name = Other.ReturnName(comdNum + 1);
			Other.In_Sub(comdNum, sawp_Score, sawp_Name);
		}

	}
		break;
	default:
		break;
	}
	return;
}




Student::Student(string name)
{
	this->StuName = name;
}
