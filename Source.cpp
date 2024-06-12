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

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть яка довжина подушки (в метрах): \n";
//	int L;
//	cin >> L;
//	cout << "Введіть які мають бути подушки (довжина в сантиметрах): \n";
//	int P;
//	cin >> P;
//	L = L * 100;
//	int num = 0;
//	while (L > 0)
//	{
//		num++;
//		L -= P;
//	}
//	cout << "Кількість подушок: \t" << num << " штук ";
//}

// На складі N ящиків з яблуками, треба звільнити склад. 
// Машини по черзі підїжджають і забирають певну кількість ящиків. 
// Визначити кількість машин що підїхали до складу.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Вкажіть кількість ящиків на складі: \n";
//	int N;
//	cin >> N;
//	const int capacity = 60;
//	int car = 0;
//	while (N > 0)
//	{
//		car++;
//		N -= capacity;
//	}
//	cout << "Потрібно " << car << " машин для розвантаження складу.";
//}

//Користувач вводить з клавіатури число більше за нуль,
//необхідно вивести всі його цифри, починаючи з кінця.
//Примітка.Наприклад, користувач ввів число 12345.
//На екрані має з, явитися число, записане навпаки — 54321.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть число більше нуля: ";
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

//Користувач вводить з клавіатури число, необхідно
//показати на екран суму його цифр.
//Примітка.Наприклад, користувач ввів число 12345.
//На екрані має з, явитися повідомлення про те, що
//сума цифр числа є 15.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть число більше нуля: ";
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
//	cout << "Сума чисел: " << sum << endl;
//}

//У перший день равлик проповз 15 см.Кожен наступ -
//ний день він проповзав на 2 см далі.Визначити, яку
//загальну відстань проповзе равлик через N днів.
//Примітка.Наприклад, користувач ввів число 4.
//Отже, равлик повз 4 дні, тому сумарний шлях
//складе 72 см.

#include<iostream>
#include<Windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int distance = 0;
	cout << "Скільки днів повзе равлик?: ";
	int Day;
	cin >> Day;
	int step = 0;
	for (int i = 15; Day != step; i+=2)
	{
		distance += i;
		step++;
	}
	cout << "Дистанція яку проповз равлик за " << Day << " днів " << distance << " сантиметрів." << endl;
}