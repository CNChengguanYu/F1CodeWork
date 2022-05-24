#pragma once
#include<iostream>
#include<string>
#include"EduExp.h"
#include"OneSubScore.h"
#define CS system("cls")			//清除屏幕
using namespace std;
class Student
{
private:
	string StuName;			//学生姓名
    EduExp Ps;
    EduExp Ms;
    EduExp Us;
    EduExp Other;
   
public:
    void Score_IN();		    //输入成绩函数【1】
    void ResetInfo();           //修改信息函数【2】
    void Show_Std_ScoreList();  //查询信息函数【3】
    void DeleteInfo();          //删除信息函数【4】
	Student(string name);   
	~Student() {};
};

