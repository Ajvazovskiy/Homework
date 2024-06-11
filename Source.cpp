//Програма яка виводить на екран горизонтальну лінію з символів.
// Кількість символів,який символ, і яка лінія (вертикальна чи гризонтальна) вказує користувач.

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
//	cout << "Введіть кількість символів та символ (через пробіл): ";
//	cin >> num >> sumb;
//	cout << "Якшо лінія горизонтальна тисни - '1', вертикальна -'0'";
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

//Програма яка знаходить суму всіх цілих непарних чисел у діапазоні зазначеному користувачем.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть діапазон цілих чисел від початку докінця через пробіл: ";
	int start, end;
	cin >> start >> end;
	int sum = 0;
	if (start % 2 == 0)
	{
		start++;
	}
	while (start <= end)
	{
		if (start % 2 != 0)
		{
			sum += start;
			start += 2;
		}
	}
	cout << "\nСума непарних цілих: " << sum << endl;
}