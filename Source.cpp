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

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ������� ����� �� �����: \n";
//	int N;
//	cin >> N;
//	const int capacity = 60;
//	int car = 0;
//	while (N > 0)
//	{
//		car++;
//		N -= capacity;
//	}
//	cout << "������� " << car << " ����� ��� ������������� ������.";
//}

//���������� ������� � ��������� ����� ����� �� ����,
//��������� ������� �� ���� �����, ��������� � ����.
//�������.���������, ���������� ��� ����� 12345.
//�� ����� �� �, ������� �����, �������� ������� � 54321.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ����� ����� ����: ";
//	int n,tmp;
//	cin >> n;
//	int m = 10;
//	int mn = 10;
//	for (int i = n; i != 0; i /= 10)
//	{
//		if (i == n)
//		{
//			tmp = n % m;
//			cout << tmp;
//			continue;
//		}
//		m *= 10;
//		tmp = (n % m)/mn;
//		mn *= 10;
//		cout << tmp;
//		
//	}
//}

//���������� ������� � ��������� �����, ���������
//�������� �� ����� ���� ���� ����.
//�������.���������, ���������� ��� ����� 12345.
//�� ����� �� �, ������� ����������� ��� ��, ��
//���� ���� ����� � 15.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ����� ����� ����: ";
//	int n, tmp;
//	cin >> n;
//	int m = 10, mn = 10;
//	int sum = 0;
//	for (int i = n; i != 0; i /= 10)
//	{
//		if (i == n)
//		{
//			tmp = n % m;
//			sum += tmp;
//			continue;
//		}
//		m *= 10;
//		tmp = (n % m) / mn;
//		mn *= 10;
//		sum += tmp;
//	}
//	cout << "���� �����: " << sum << endl;
//}

//� ������ ���� ������ ������� 15 ��.����� ������ -
//��� ���� �� ��������� �� 2 �� ���.���������, ���
//�������� ������� �������� ������ ����� N ���.
//�������.���������, ���������� ��� ����� 4.
//����, ������ ���� 4 ��, ���� �������� ����
//������ 72 ��.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int distance = 0;
//	cout << "������ ��� ����� ������?: ";
//	int Day;
//	cin >> Day;
//	int step = 0;
//	for (int i = 15; Day != step; i+=2)
//	{
//		distance += i;
//		step++;
//	}
//	cout << "��������� ��� ������� ������ �� " << Day << " ��� " << distance << " ����������." << endl;
//}

//��� ��������� ������ ������� �.������� ������
//9 ����.���� � ��������� ������� �������, �� �� -
//���� �������� �����, ���� ������ ������, �������
//������ � ��������� �������, ������, � ���������.
//�������� ��������, ��� 9 ���� ������ ����� 1 ���
//0 (���� / �����) � ���� ��������� ��������� ����`����� �������� �������� �.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int eagle = 0;
//	for (int i = 1; i <= 9; i++)
//	{
//		cout << i << "." << " ���� �� �����? (1 �� 0): ";
//		int tmp;
//		cin >> tmp;
//		if (tmp)
//			eagle++;
//	}
//	eagle % 2 == 0 ? cout << "true" : cout << "false";
//}

//������� �� ������� �������� �� ������� ����� � ����������� ����������� ������ ��� ����� 
// ��� ������� �����.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "������ ����� �����: ";
//	int mounth;
//	cin >> mounth;
//	cout << "�������� ����� ��� ����� ������� �����: ";
//	int week;
//	cin >> week;
//	if (mounth == 1 || mounth == 3 || mounth == 5 || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12)
//	{
//		mounth = 31;
//	}
//	else if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)
//	{
//		mounth = 30;
//	}
//	else
//	{
//		mounth = 28;
//	}
//	cout << "��\t��\t��\t��\t��\t��\t��\n";
//	int num = 1;
//	for (int i = 1; i < week; i++)
//		cout << "\t";
//	for (int i = 1; i <= mounth; i++)
//	{
//		cout << i;
//		if (num == 7 - (week - 1) || num == 14 - (week - 1) || num == 21 - (week - 1) || num == 28 - (week - 1))
//		{
//			cout << endl;
//		}
//		else
//		{
//			cout << "\t";
//		}
//		num++;
//	}
//
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (i + j >= 9 && i >= j)
//			{
//				cout << "***";
//			}
//			else
//			{
//				cout << "   ";
//			}
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "###";
//		}
//		cout << endl;
//	}
//}

//�������� �������� ��� ��� ����� � ������� �� � �� � ������� ������� ���� �������.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "�������� ������� ����� (��� ����� ����� �����): ";
//	int A, B;
//	cin >> A >> B;
//	for (A; A <= B ; A++)
//	{
//		cout << "ĳ������ " << A << "\t";
//		for (int j = 1; j <= A; j++)
//		{
//			if (A % j == 0)
//			{
//				cout << j << ",";
//			}
//		}
//		
//		cout << endl;
//	}
//}

//�������� �������� ��� �������� �� ����� ����� ����� �� 2 �� 1000.
// (����� ��������� ������� ���� ���� ������ ���� �� 1 �� �� ���� ���� ��� �������)

#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (int i = 3; i <= 1000; i++)
	{
		bool flag = true;
		for (int j = i - 1; j > 1; j--)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << i << "\t";

	}
}