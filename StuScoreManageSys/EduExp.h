#pragma once
#include"OneSubScore.h"
class EduExp
{
private:
	OneSubScore Sub[32];  //ֻ֧��32��Ŀ
public:
	int ReturnComdNum();		//���ص�ǰ�������������
	void In_Sub(int comdNum, int score, string name);//�Զ��׼����������뺯��
	//void ShowSub(int comdNum)
	//{
	//	Sub[comdNum].ShowThisScore();
	//}
	void ShowSubList();			//չʾ�ɼ��б�
	void ShowOneSub(int SubNum);//չʾ���Ƴɼ�
	int ReturnScore(int comdNum);
	string ReturnName(int comdNum);
	float EduEndScPoint();		//�ɼ�����
	EduExp() {};
	~EduExp() {};
};

