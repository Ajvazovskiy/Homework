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

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть діапазон цілих чисел від початку докінця через пробіл: ";
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
//	cout << "\nСума непарних цілих: " << sum << endl;
//}

//Дано невідємне ціле число необхідно визначити факторіал.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть число: ";
//	int n;
//	cin >> n;
//	int fact = 1;
//	if (n == 0)
//		cout << "Факторіал числа: " << n << endl;
//	else if (n < 0)
//		cout << "Введіть додатнє число!!!";
//	else
//	{
//		int f = 1;
//		while (n != f - 1)
//		{
//			fact *= f;
//			f++;
//		}
//		cout << "Факторіал числа: " << n << " = " << fact << endl;
//	}
//
//}

//Швачка має тканину довжиною L. 
// Вона мусить пошити подушки довжиною P.Ширина тканаини збігаєтся з шириною подушки.
//Визначити скільки подушок вона може пошити якщо вона не вміє множити та ділити.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введіть яка довжина подушки (в метрах): \n";
	int L;
	cin >> L;
	cout << "Введіть які мають бути подушки (довжина в сантиметрах): \n";
	int P;
	cin >> P;
	L = L * 100;
	int num = 0;
	while (L > 0)
	{
		num++;
		L -= P;
	}
	cout << "Кількість подушок: \t" << num << " штук ";
}