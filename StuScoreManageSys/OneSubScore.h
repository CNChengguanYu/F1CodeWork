#pragma once
#include<string>
using namespace std;
class OneSubScore
{
private:
	string SubName=" ";//��������
	int SubScore=-1;//���Ƴɼ�
public:
	OneSubScore(){}
	~OneSubScore() {}
	void DataIn(int score, string Subname)		//����
	{
		this->SubName = Subname;
		this->SubScore = score;
	}
	int ReturnMode() 
	{
		return SubScore;
	}//��������״̬
	string ReturnNmae() { return SubName; }
	//void ShowThisScore();
};

