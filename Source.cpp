//�������� ��� �������� �� ����� ������������� ��� � �������.
// ʳ������ �������,���� ������, � ��� ��� (����������� �� ������������) ����� ����������.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int num;
//	char sumb;
//	cout << "������ ������� ������� �� ������ (����� �����): ";
//	cin >> num >> sumb;
//	cout << "���� ��� ������������� ����� - '1', ����������� -'0'";
//	int line;
//	cin >> line;
//	if (line)
//	{
//		while (num)
//		{
//			cout << sumb;
//			num--;
//		}
//	}
//	else
//	{
//		while (num)
//		{
//			cout << sumb << endl;
//			num--;
//		}
//	}
//}

//�������� ��� ��������� ���� ��� ����� �������� ����� � ������� ����������� ������������.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ������� ����� ����� �� ������� ������ ����� �����: ";
//	int start, end;
//	cin >> start >> end;
//	int sum = 0;
//	if (start % 2 == 0)
//	{
//		start++;
//	}
//	while (start <= end)
//	{
//		if (start % 2 != 0)
//		{
//			sum += start;
//			start += 2;
//		}
//	}
//	cout << "\n���� �������� �����: " << sum << endl;
//}

//���� ������� ���� ����� ��������� ��������� ��������.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ �����: ";
//	int n;
//	cin >> n;
//	int fact = 1;
//	if (n == 0)
//		cout << "�������� �����: " << n << endl;
//	else if (n < 0)
//		cout << "������ ������ �����!!!";
//	else
//	{
//		int f = 1;
//		while (n != f - 1)
//		{
//			fact *= f;
//			f++;
//		}
//		cout << "�������� �����: " << n << " = " << fact << endl;
//	}
//
//}

//������ �� ������� �������� L. 
// ���� ������ ������ ������� �������� P.������ �������� ������� � ������� �������.
//��������� ������ ������� ���� ���� ������ ���� ���� �� �쳺 ������� �� �����.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ��� ������� ������� (� ������): \n";
//	int L;
//	cin >> L;
//	cout << "������ �� ����� ���� ������� (������� � �����������): \n";
//	int P;
//	cin >> P;
//	L = L * 100;
//	int num = 0;
//	while (L > 0)
//	{
//		num++;
//		L -= P;
//	}
//	cout << "ʳ������ �������: \t" << num << " ���� ";
//}

// �� ����� N ����� � ��������, ����� �������� �����. 
// ������ �� ���� ��������� � ��������� ����� ������� �����. 
// ��������� ������� ����� �� ������ �� ������.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ������� ����� �� �����: \n";
	int N;
	cin >> N;
	const int capacity = 60;
	int car = 0;
	do
	{
		car++;
		N -= capacity;
	} while (N >= 0);
	cout << "������� " << car << " ����� ��� ������������� ������.";
}