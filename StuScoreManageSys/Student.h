#pragma once
#include<iostream>
#include<string>
#include"EduExp.h"
#include"OneSubScore.h"
#define CS system("cls")			//�����Ļ
using namespace std;
class Student
{
private:
	string StuName;			//ѧ������
    EduExp Ps;
    EduExp Ms;
    EduExp Us;
    EduExp Other;
   
public:
    void Score_IN();		    //����ɼ�������1��
    void ResetInfo();           //�޸���Ϣ������2��
    void Show_Std_ScoreList();  //��ѯ��Ϣ������3��
    void DeleteInfo();          //ɾ����Ϣ������4��
	Student(string name);   
	~Student() {};
};

