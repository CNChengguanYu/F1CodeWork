#include "Student.h"
#define Y y
#define N n
int ComdNum = 0;//��Ŀ���½Ǳ�(������)
void Student::Score_IN()
{
	CS;
	int Level;
	cout << "��1��Сѧ��2����ѧ��3����ѧ��4������" << endl;
	while (1) {				//����һ������ģ�飬ȷ������Ϸ�   !!!BUG!!!Ŀǰ����Ϊ��ĸʱ��������
		Level = 0;
		cout << "����������ѧϰ�׶Σ�" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4) 
		{
			cout << "�����������������" << endl;
			continue;
		}
		break;
	}
	cout<<""<< endl;		//��ӡ�س�
	//while (1) 
	//{
		char inMode;//����ģʽ
		int score;//�ɼ�
		string name;//��Ŀ����

		switch (Level)		//ȷ��ѧϰ�׶�,1С2��3��4����
		{
		case 1:
			while(1){				//�������Сѧ
				ComdNum = Ps.ReturnComdNum();
				if (ComdNum >= 32) 
				{
					cout<<"���Դ���Ŀ�Ŀ������" << endl;
					break;
				}
					cout << "�Ƿ�����ɼ���(y/n)" << endl;
					cin >> inMode;
					if (inMode == 'N' || inMode == 'n') 
					{
						break; 
					}
					cout << "��������Сѧ�׶ε������Ϣ���ɼ�������Ŀ���ƣ�" << endl;
					cin >> score >> name;
					Student::Ps.In_Sub(ComdNum, score, name);
					ComdNum++;
					//ͨ��In_Sub�������ʿ�Ŀ������Ϊ�����������ɼ�����Ŀ����
				}

			break;
		case 2:
			while (1) {			//���������ѧ
				ComdNum = Ms.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "���Դ���Ŀ�Ŀ������" << endl;
					break;
				}
				cout << "�Ƿ�����ɼ���(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "����������ѧ�׶ε������Ϣ���ɼ�������Ŀ���ƣ�" << endl;
				cin >> score >> name;
				Student::Ms.In_Sub(ComdNum, score, name);
				ComdNum++;
				//ͨ��In_Sub�������ʿ�Ŀ������Ϊ�����������ɼ�����Ŀ����
			}
			break;
		case 3:
			while (1) {			//��������ѧ
				ComdNum = Us.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "���Դ���Ŀ�Ŀ������" << endl;
					break;
				}
				cout << "�Ƿ�����ɼ���(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "����������ѧ�׶ε������Ϣ���ɼ�������Ŀ���ƣ�" << endl;
				cin >> score >> name;
				Student::Us.In_Sub(ComdNum, score, name);
				ComdNum++;
				//ͨ��In_Sub�������ʿ�Ŀ������Ϊ�����������ɼ�����Ŀ����
			}
			break;
		case 4:
			while (1) {			//�����������
				ComdNum = Other.ReturnComdNum();
				if (ComdNum >= 32)
				{
					cout << "���Դ���Ŀ�Ŀ������" << endl;
					break;
				}
				cout << "�Ƿ�����ɼ���(y /n)" << endl;
				cin >> inMode;
				if (inMode == 'N' || inMode == 'n')
				{
					break;
				}
				cout << "�������������׶ε������Ϣ���ɼ�������Ŀ���ƣ�" << endl;
				cin >> score >> name;
				Student::Other.In_Sub(ComdNum, score, name);
				ComdNum++;
				//ͨ��In_Sub�������ʿ�Ŀ������Ϊ�����������ɼ�����Ŀ����
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
	int Level,ResetScore=-1,ResetNum;//������
	string ResetName = " ";
	cout << "��1��Сѧ��2����ѧ��3����ѧ��4������" << endl;
	while (1) {				//����һ������ģ�飬ȷ������Ϸ�   !!!BUG!!!Ŀǰ����Ϊ��ĸʱ��������
		Level = 0;
		cout << "����������Ҫ�޸ĵ�ѧϰ�׶Σ�" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4)
		{
			cout << "�����������������" << endl;
			continue;
		}
		break;
	}
	cout << "" << endl;		//��ӡ�س�
	switch (Level)
	{
	case 1:
		cout<<"��������Сѧ�ɼ�" << endl;
		Ps.ShowSubList();
		cout<<"��������Ҫ�޸ĵĳɼ����к�" << endl;
		cin >> ResetNum;
		cout << "��Ҫ�޸ĵ��ǣ�" << endl;
		Ps.ShowOneSub(ResetNum);
		cout << "�������޸ĺ����Ϣ���ɼ��������ƣ�" << endl;
		cin >> ResetScore >> ResetName;
		Ps.In_Sub(ResetNum-1, ResetScore, ResetName);//���飡-1��
		break;
	case 2:
		cout << "����������ѧ�ɼ�" << endl;
		Ms.ShowSubList();
		cout << "��������Ҫ�޸ĵĳɼ����к�" << endl;
		cin >> ResetNum;
		cout << "��Ҫ�޸ĵ��ǣ�" << endl;
		Ms.ShowOneSub(ResetNum);
		cout << "�������޸ĺ����Ϣ���ɼ��������ƣ�" << endl;
		cin >> ResetScore >> ResetName;
		Ms.In_Sub(ResetNum - 1, ResetScore, ResetName);//���飡-1��(ǰ̨��ӡ�ı���Ǵ�1��ʼ��)
		break;
	case 3:
		cout << "�������Ĵ�ѧ�ɼ�" << endl;
		Us.ShowSubList();
		cout << "��������Ҫ�޸ĵĳɼ����к�" << endl;
		cin >> ResetNum;
		cout << "��Ҫ�޸ĵ��ǣ�" << endl;
		Us.ShowOneSub(ResetNum);
		cout << "�������޸ĺ����Ϣ���ɼ��������ƣ�" << endl;
		cin >> ResetScore >> ResetName;
		Us.In_Sub(ResetNum - 1, ResetScore, ResetName);//���飡-1��
		break;
	case 4:
		cout << "�������������ɼ�" << endl;
		Other.ShowSubList();
		cout << "��������Ҫ�޸ĵĳɼ����к�" << endl;
		cin >> ResetNum;
		cout << "��Ҫ�޸ĵ��ǣ�" << endl;
		Other.ShowOneSub(ResetNum);
		cout << "�������޸ĺ����Ϣ���ɼ��������ƣ�" << endl;
		cin >> ResetScore >> ResetName;
		Other.In_Sub(ResetNum - 1, ResetScore, ResetName);//���飡-1��
		break;
	default:
		break;
	}

}

void Student::Show_Std_ScoreList()				//���ȫ����Ϣ
{
	CS;
	cout << "������Сѧ����Ϣ" << endl;
	Ps.ShowSubList();
	cout << "Сѧ�׶����ճɼ�����Ϊ:" << Ps.EduEndScPoint()<< endl;
	cout << "��������ѧ����Ϣ" << endl;
	Ms.ShowSubList();
	cout << "��ѧ�׶����ճɼ�����Ϊ:" << Ms.EduEndScPoint() << endl;
	cout << "��������ѧ����Ϣ" << endl;
	Us.ShowSubList();
	cout << "��ѧ�׶����ճɼ�����Ϊ:" << Us.EduEndScPoint() << endl;
	cout << "��������������Ϣ" << endl;
	Other.ShowSubList();
	cout << "�����׶����ճɼ�����Ϊ:" << Other.EduEndScPoint() << endl;

}

void Student::DeleteInfo()
{
	CS;
	int Level,DelNum;
	cout << "��1��Сѧ��2����ѧ��3����ѧ��4������" << endl;
	while (1) {				//����һ������ģ�飬ȷ������Ϸ�   !!!BUG!!!Ŀǰ����Ϊ��ĸʱ��������
		Level = 0;
		cout << "��������Ҫɾ����Ϣ�ĵ�ѧϰ�׶Σ�" << endl;
		cin >> Level;
		if (Level != 1 && Level != 2 && Level != 3 && Level != 4)
		{
			cout << "�����������������" << endl;
			continue;
		}
		break;
	}
	cout << "" << endl;		//��ӡ�س�
	switch (Level)				//ɾ������
	{
	case 1: 
		{
			Ps.ShowSubList();
			cout << "��������Ҫɾ���ı��(�����Ҫ�˳���������0)" << endl;
			while (1)
			{
				cin >> DelNum;
				if (DelNum<0 || DelNum>Ps.ReturnComdNum())
				{
					cout << "�����������������" << endl;
					continue;
				}
				break;
			}
			if (DelNum == 0)break;
			int Num_of_time = Ps.ReturnComdNum() - DelNum;		//ɾ������Ҫ�����Ĵ�����ԭ����λ����������潻����
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
		cout << "��������Ҫɾ���ı��(�����Ҫ�˳���������0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Ms.ReturnComdNum())
			{
				cout << "�����������������" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Ms.ReturnComdNum() - DelNum; //ɾ������Ҫ�����Ĵ���
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
		cout << "��������Ҫɾ���ı��(�����Ҫ�˳���������0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Us.ReturnComdNum())
			{
				cout << "�����������������" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Us.ReturnComdNum() - DelNum; //ɾ������Ҫ�����Ĵ���
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
		cout << "��������Ҫɾ���ı��(�����Ҫ�˳���������0)" << endl;
		while (1)
		{
			cin >> DelNum;
			if (DelNum<0 || DelNum>Other.ReturnComdNum())
			{
				cout << "�����������������" << endl;
				continue;
			}
			break;
		}
		if (DelNum == 0)break;
		int Num_of_time = Other.ReturnComdNum() - DelNum; //ɾ������Ҫ�����Ĵ���
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
