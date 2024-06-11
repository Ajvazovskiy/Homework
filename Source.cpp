//Програма яка виводить на екран горизонтальну лінію з символів.
// Кількість символів,який символ, і яка лінія (вертикальна чи гризонтальна) вказує користувач.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	char sumb;
	cout << "Введіть кількість символів та символ (через пробіл): ";
	cin >> num >> sumb;
	cout << "Якшо лінія горизонтальна тисни - '1', вертикальна -'0'";
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