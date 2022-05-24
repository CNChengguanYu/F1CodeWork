#pragma once
#include"OneSubScore.h"
class EduExp
{
private:
	OneSubScore Sub[32];  //只支持32科目
public:
	int ReturnComdNum();		//返回当前数组的最后操作数
	void In_Sub(int comdNum, int score, string name);//显而易见，这是输入函数
	//void ShowSub(int comdNum)
	//{
	//	Sub[comdNum].ShowThisScore();
	//}
	void ShowSubList();			//展示成绩列表
	void ShowOneSub(int SubNum);//展示单科成绩
	int ReturnScore(int comdNum);
	string ReturnName(int comdNum);
	float EduEndScPoint();		//成绩评分
	EduExp() {};
	~EduExp() {};
};

