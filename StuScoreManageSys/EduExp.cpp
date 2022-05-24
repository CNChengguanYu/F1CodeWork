#include "EduExp.h"
#include<iostream>
int EduExp::ReturnComdNum()             //返回数组上限
{
    int i = 0;
    for (i = 0; i < 32; i++) 
    {
        if (Sub[i].ReturnMode() == -1)return i;
    }
}
void EduExp::ShowSubList()
{
    int Max = ReturnComdNum(),i=0;      //寻找数组上限
    for (i; i < Max; i++) 
    {
        cout << i + 1 << "\t" << Sub[i].ReturnNmae() << "\t" << Sub[i].ReturnMode() << endl;//ReturnMode本身就是返回成绩
    }
    cout << "\n" << endl;
}
void EduExp::ShowOneSub(int SubNum)//展示单科成绩
{
    if ((SubNum - 1) >= ReturnComdNum()) 
    {
        cout<<"并没有这个编号" << endl;
        return;
    }
    cout <<  SubNum << "\t" << Sub[SubNum-1].ReturnNmae() << "\t" << Sub[SubNum-1].ReturnMode() << endl;//这里传入的是前端编号，和数组编号多一位
}
int EduExp::ReturnScore(int comdNum)
{
    return Sub[comdNum].ReturnMode();
}
string EduExp::ReturnName(int comdNum)
{
    return Sub[comdNum].ReturnNmae();
}
void EduExp::In_Sub(int comdNum, int score, string name)
{
    Sub[comdNum].DataIn(score, name);
}

float EduExp::EduEndScPoint()        //返回学业评测点
{
    int Max = ReturnComdNum(), i = 0, Stemp = 0;      //寻找数组上限
    if (Max==0) 
    {
        return 0;
    }
    for (i; i < Max; i++) 
    {
        Stemp += Sub[i].ReturnMode();
    }
    return ((float)Stemp / Max);
}
