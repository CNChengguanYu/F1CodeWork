#include "EduExp.h"
#include<iostream>
int EduExp::ReturnComdNum()             //������������
{
    int i = 0;
    for (i = 0; i < 32; i++) 
    {
        if (Sub[i].ReturnMode() == -1)return i;
    }
}
void EduExp::ShowSubList()
{
    int Max = ReturnComdNum(),i=0;      //Ѱ����������
    for (i; i < Max; i++) 
    {
        cout << i + 1 << "\t" << Sub[i].ReturnNmae() << "\t" << Sub[i].ReturnMode() << endl;//ReturnMode������Ƿ��سɼ�
    }
    cout << "\n" << endl;
}
void EduExp::ShowOneSub(int SubNum)//չʾ���Ƴɼ�
{
    if ((SubNum - 1) >= ReturnComdNum()) 
    {
        cout<<"��û��������" << endl;
        return;
    }
    cout <<  SubNum << "\t" << Sub[SubNum-1].ReturnNmae() << "\t" << Sub[SubNum-1].ReturnMode() << endl;//���ﴫ�����ǰ�˱�ţ��������Ŷ�һλ
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

float EduExp::EduEndScPoint()        //����ѧҵ�����
{
    int Max = ReturnComdNum(), i = 0, Stemp = 0;      //Ѱ����������
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
