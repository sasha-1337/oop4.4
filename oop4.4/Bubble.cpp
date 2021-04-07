#include "Bubble.h"
void Bubble::Read(Bubble& a)
{
	cout << "--- �������� ������ �1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
	{
		cout << " arr[" << i << "] - ? "; cin >> a[i];
	}
	cout << endl;
}

void Bubble::Print(const Bubble& a)
{
	cout << "--- ������ �1 ---" << endl;
	for (int i = 0; i < a.GetSize(); i++)
		cout << "arr[" << i << "] = " << a[i] << endl;
	cout << endl;
}

void Bubble::sort()
{
	double temp = 0;
	for (int i = 0; i < GetSize() - 1; i++) // �������� ��������
	{
		for (int j = 0; j < GetSize() - i - 1; j++) // ����� ��������� ��������
		{
			if (GetArr()[j] > GetArr()[j + 1]) // ���� �������� ����� �������������
			{
				temp = GetArr()[j];				// 
				GetArr()[j] = GetArr()[j + 1];	// - ���� �������� ������
				GetArr()[j + 1] = temp;			//
			}
		}
	}
}

void Bubble::foreach()
{
	for (int i = 0; i < GetSize(); i++)
	{

		if (GetArr()[i] >= 0)
		{
			GetArr()[i] = sqrt(GetArr()[i]);
		}
	}
}


double Bubble::foreach1(int i)
{
		if (GetArr()[i] >= 0)
		{
			return sqrt(GetArr()[i]);
		}
		else
			cout << " �� ��������� " << endl;
}