//�������� ��� �������� �� ����� ������������� ��� � �������.
// ʳ������ �������,���� ������, � ��� ��� (����������� �� ������������) ����� ����������.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	char sumb;
	cout << "������ ������� ������� �� ������ (����� �����): ";
	cin >> num >> sumb;
	cout << "���� ��� ������������� ����� - '1', ����������� -'0'";
	int line;
	cin >> line;
	if (line)
	{
		while (num)
		{
			cout << sumb;
			num--;
		}
	}
	else
	{
		while (num)
		{
			cout << sumb << endl;
			num--;
		}
	}
}