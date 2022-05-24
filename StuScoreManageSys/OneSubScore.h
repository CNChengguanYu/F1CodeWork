#pragma once
#include<string>
using namespace std;
class OneSubScore
{
private:
	string SubName=" ";//单科名称
	int SubScore=-1;//单科成绩
public:
	OneSubScore(){}
	~OneSubScore() {}
	void DataIn(int score, string Subname)		//输入
	{
		this->SubName = Subname;
		this->SubScore = score;
	}
	int ReturnMode() 
	{
		return SubScore;
	}//返回数组状态
	string ReturnNmae() { return SubName; }
	//void ShowThisScore();
};

