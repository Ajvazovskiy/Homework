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

//Швачка має тканину довжиною . 
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
//	int ;
//	cin >> ;
//	cout << "Введіть які мають бути подушки (довжина в сантиметрах): \n";
//	int P;
//	cin >> P;
//	 =  * 100;
//	int num = 0;
//	while ( > 0)
//	{
//		num++;
//		 -= P;
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

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int distance = 0;
//	cout << "Скільки днів повзе равлик?: ";
//	int Day;
//	cin >> Day;
//	int step = 0;
//	for (int i = 15; Day != step; i+=2)
//	{
//		distance += i;
//		step++;
//	}
//	cout << "Дистанція яку проповз равлик за " << Day << " днів " << distance << " сантиметрів." << endl;
//}

//Для прийняття рішення студент Д.підкидав монету
//9 разів.Якщо в результаті кількість монеток, що ви -
//пали стороною «орел», була парним числом, приймав
//рішення в позитивну сторону, інакше, у негативну.
//Напишіть програму, яка 9 разів запитує число 1 або
//0 (орел / решка) і видає відповідний результат розв`зання проблеми студента Д.

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
//		cout << i << "." << " Орел чи Решка? (1 чі 0): ";
//		int tmp;
//		cin >> tmp;
//		if (tmp)
//			eagle++;
//	}
//	eagle % 2 == 0 ? cout << "true" : cout << "false";
//}

//Вивести на дисплей календар на обраний місяць з урахуванням зазначеного номера дня тижня 
// для початку місяця.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Введіть номер місяця: ";
//	int mounth;
//	cin >> mounth;
//	cout << "Зазначте номер дня тижня початку місяця: ";
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
//	cout << "Пн\tВт\tСр\tЧт\tПт\tСб\tНд\n";
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

//Написати програму яка для чисел у діапазоні від А до В визначає кількість їхніх дільників.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Визначте діапазон чисел (два числа через пробіл): ";
//	int A, B;
//	cin >> A >> B;
//	for (A; A <= B ; A++)
//	{
//		cout << "Дільники " << A << "\t";
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

//Створити програму яка виводить на екран прості числа від 2 до 1000.
// (Число називаєтся простим якщо воно ділится лише на 1 та на саме себе без залишку)

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	for (int i = 3; i <= 1000; i++)
//	{
//		bool flag = true;
//		for (int j = i - 1; j > 1; j--)
//		{
//			if (i % j == 0)
//			{
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//			cout << i << "\t";
//	}
//}

//Сніжинка

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Ввадіть параметри матриці (додатнє не парне число): ";
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j || i + j == n - 1 || i == n/2 || j == n/2)
//			{
//				cout << "8";
//			}
//			else
//			{
//				cout << " ";
//			}
//		}
//		cout << "\n";
//	}
//}

//На валізі стоїть тризначний код.Він складаєтся з цифр які не повторюются. Напишіть програму яка виведе всі 
// можливі комбінації цифр. А також визначте скільки часу знадобится для відкриття валізи 
// в гіршому випадку якщо на один такий набір витрачаєтся 3 секунди.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Усі можливі комбінації кодів замкка: \n";
//	int kilkist = 0;
//	for (int i = 10; i < 1000; i++)
//	{
//		int num1 = 0, num2 = 0, num3 = 0;
//		for (int j = i; j > 0; j /= 10)
//		{
//			if (i >= 100)
//			{
//				if (j >= 100)
//				{
//					num1 = j % 10;
//				}
//				else if (j >= 10)
//				{
//					num2 = j % 10;
//				}
//				else
//				{
//					num3 = j % 10;
//				}
//			}
//			else
//			{
//				if (j >= 10)
//				{
//					num1 = j % 10;
//				}
//				else
//				{
//					num2 = j;
//				}
//			}
//		}
//		if (i >= 100)
//		{
//			if (!(num1 == num2 || num2 == num3 || num1 == num3))
//			{
//				kilkist++;
//				cout << i << endl;
//			}
//		}
//		else if (i < 100)
//		{
//			if (num1 != num2)
//			{
//				kilkist++;
//				cout << 0 << i << endl;
//			}
//		}
//	}
//	int time = kilkist * 3;
//	int min = time / 60;
//	int sec = time % 60;
//	cout << "В гіршому випадку на відкриття валізи знадобится: " << min << " хвилин!" << sec << "секунд" << endl;
//}

//Наприкінці травня фірма формує звіт по заробітній
//платі 12 співробітників за весняний квартал.Написати програму, яка запитуватиме суму заробітної плати
//кожного співробітника за Березень, Квітень і Травень.
//Необхідно визначити :
//■ виплату по кожному співробітнику за квартал;
//■ загальну виплату по всім співробітникам за квартал.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Вітаємо! \nДавайте облікуємо платню наших співробітників за квартал.\n";
//	int zag = 0;
//	int sp1{}, sp2{}, sp3{}, sp4{}, sp5{}, sp6{}, sp7{}, sp8{}, sp9{}, sp10{}, sp11{}, sp12{};
//	for (int i = 1; i <= 12; i++)
//	{
//		cout << "введіть платню " << i << " співробітника за березень: ";
//		int marth;
//		cin >> marth;
//		cout << "введіть платню " << i << " співробітника за квітень: ";
//		int april;
//		cin >> april;
//		cout << "введіть платню " << i << " співробітника за травень: ";
//		int may;
//		cin >> may;
//		switch (i)
//		{
//		case 1: sp1 += marth + april + may;
//			zag += sp1;
//			break;
//		case 2: sp2 += marth + april + may;
//			zag += sp2;
//			break;
//		case 3: sp3 += marth + april + may;
//			zag += sp3;
//			break;
//		case 4: sp4 += marth + april + may;
//			zag += sp4;
//			break;
//		case 5: sp5 += marth + april + may;
//			zag += sp5;
//			break;
//		case 6: sp6 += marth + april + may;
//			zag += sp6;
//			break;
//		case 7: sp7 += marth + april + may;
//			zag += sp7;
//			break;
//		case 8: sp8 += marth + april + may;
//			zag += sp8;
//			break;
//		case 9: sp9 += marth + april + may;
//			zag += sp9;
//			break;
//		case 10: sp10 += marth + april + may;
//			zag += sp10;
//			break;
//		case 11: sp11 += marth + april + may;
//			zag += sp11;
//			break;
//		case 12: sp12 += marth + april + may;
//			zag += sp12;
//			break;
//		default:
//			break;
//		}
//	}
//	cout << "Платня за квартал 1 співробітника: " << sp1 << endl;
//	cout << "Платня за квартал 2 співробітника: " << sp2 << endl;
//	cout << "Платня за квартал 3 співробітника: " << sp3 << endl;
//	cout << "Платня за квартал 4 співробітника: " << sp4 << endl;
//	cout << "Платня за квартал 5 співробітника: " << sp5 << endl;
//	cout << "Платня за квартал 6 співробітника: " << sp6 << endl;
//	cout << "Платня за квартал 7 співробітника: " << sp7 << endl;
//	cout << "Платня за квартал 8 співробітника: " << sp7 << endl;
//	cout << "Платня за квартал 9 співробітника: " << sp8 << endl;
//	cout << "Платня за квартал 10 співробітника: " << sp9 << endl;
//	cout << "Платня за квартал 11 співробітника: " << sp11 << endl;
//	cout << "Платня за квартал 12 співробітника: " << sp12 << endl;
//	cout << "Загальна сума виплати для всіх: " << zag << endl;
//}

//Дана програма, яка визначає останнє додатне і перше
//від'ємне число в масиві. Знайти і виправити синтак-
//сичні й логічні помилки.

//#include <iostream>
//using namespace std;
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int size = 8;
//	double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4 };
//	double positive = 0;
//	for (int i = size -1; i >= 0; i--)
//	{
//		if (arr[i] > 0)
//		{
//			positive = arr[i];
//			break;
//		}
//	}
//	double negative = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] < 0)
//		{
//			negative = arr[i];
//			break;
//		}
//	}
//	cout << "Last positive number: " << positive << endl;
//	cout << "First negatine number: " << negative << endl;
//}

//Вхідними даними у всіх описаних нижче завданнях
//є масив з 10 елементів, заповнений користувачем з
//клавіатури.

// У масиві зберігається інформація про кількість мешканців кожної квартири п'ятиповерхового будинку
//(4 під'їзди, на кожному поверсі по 2 квартири).
//	а) за обраним номером квартири визначити кількість
//	мешканців, а також їхніх сусідів, які проживають на одному поверсі;
//  б) визначити сумарну кількість мешканців для кожного під'їзду;
//  в) визначити номери квартир, де мешкають багатодітні сім'ї. Умовно будемо вважати багатодітними сім'ї, у
//  яких кількість членів сім'ї перевищує п'ять осіб.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	const int size = 12;
//	int home[size]{ 1,4,5,6,10,2,5,7,3,1,3,4 };
//	int many_child[size]{};
//	cout << "Bкажіть номер квартири (від 1 - 12): ";
//	int kv;
//	cin >> kv;
//	int pid1 = 0, pid2 = 0, pid3 = 0;
//	int l = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (kv == i + 1)
//		{
//			cout << "Квартира № " << kv << " містить" << " - " << home[i] << " мешканців." << endl;
//			if ((i + 1) % 2 != 0)
//			{
//				cout << "Сусідня квартира №: " << kv + 1 << " містить " << " - " << home[i + 1] << " мешканців." << endl;
//			}
//			else
//			{
//				cout << "Сусідня квартира №: " << kv - 1 << " містить " << " - " << home[i - 1] << " мешканців." << endl;
//			}
//		}
//		if (i < 4)
//			pid1 += i;
//		else if (i < 8 && i >3)
//			pid2 += i;
//		else
//			pid3 += i;
//		if (home[i] > 5)
//		{
//			many_child[l] = i;
//			l++;
//		}
//	}
//	cout << "У першому підїзді: " << pid1 << " мешканців.\n";
//	cout << "У другому підїзді: " << pid2 << " мешканців\n";
//	cout << "У третьому підїзді: " << pid3 << " мешканців\n";
//	cout << "Номера квартир багатодітних сімей: ";
//	for (int i = 0; i < size; i++)
//	{
//		if (many_child[i] != 0)
//			cout << many_child[i] << ";";
//	}
//}

//Дана температура повітря за кожен день січня.
//Визначити: а) середню температуру за місяць.
//           б) скільки разів температура опускалася за зазначену мітку.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	const int day = 31;
//	int t_jan[day]{ -1,-3,-6,-6,-10,-20,-20,-20,-13,-5,0,0,2,3,2,1,-2,-2,-5,-5,-8,-10,-11,-11,-15,-14,-12,-11,-10,-9,-9 };
//	int t = 0;
//	cout << "Зазначте мітку температури: ";
//	int t_value;
//	cin >> t_value;
//	int num = 0;
//	for (int i = 0; i < day; i++)
//	{
//		t += t_jan[i];
//		if (t_jan[i] < t_value)
//			num++;
//	}
//	cout << "Середня температура в січні: " << t / day << " градусів\n";
//	cout << "Нижче мітки температура сягала " << num << " разів.\n";
//}

//У масиві зберігається інформація про вартість 10 марок
//автомобілів. Визначити суму найдорожчого автомобіля і дізнатися його номер.Якщо таких автомобілів
//декілька, визначити: а) номер першого такого автомобіля;
//                     б) номер останнього такого автомобіля.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//void main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	const int size = 10;
//	int car[size]{ 20000,35000,5000,4500,3000,3500,35000,7000,5000,4000 };
//	int max = car[0];
//	int index;
//	for (int i = 0; i < size; i++)
//	{
//		if (car[i] > max)
//		{
//			max = car[i];
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		if (car[i] == max)
//		{
//			index = i;
//			cout << "Номер першого найдорожчого авто в списку: " << i + 1 << endl;
//			break;
//		}
//	}
//	bool f = true;
//	for (int i = size - 1; i >= 0; i--)
//	{
//		if (car[i] == max && i !=index)
//		{
//			f = false;
//			cout << "Номер останнього найдорожчого авто в списку: " << i + 1 << endl;
//			break;
//		}
//	}
//	if (f)
//	{
//		cout << "Це єдине найдорожче авто зі списку.\n";
//	}
//}

//Написати програму, яка знаходить у масиві значення,
//що повторюються два і більше разів, і виводить їх на
//екран.

//#include<iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	const int size = 10;
//	int value[size]{ 1,3,40,2,60,60,10,60,5,40 };
//	bool check[size]{};
//	for (int i = 0; i < size; i++)
//	{
//		if (!check[i])
//		{
//			bool f = false;
//			for (int j = i + 1; j < size; j++)
//			{
//				if (value[i] == value[j])
//				{
//					check[j] = true;
//					f = true;
//				}
//			}
//			if (f)
//			{
//				cout << value[i] << "\t";
//			}
//		}
//	}
//}

//Заповнити два цілочисельні масиви A[10] і B[10].Сфор -
//мувати третій масив X[20], елементи якого будуть взяті
//з A і B в порядку :
//а) чергування(A0, b0, a1, b1, a2, b2, ..., a9, b9);
//б) слідування(A0, a1, a2, ..., A9, b0, b1, b2, ..., b9).

#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 10;
	int A[size]{},B[size]{};
	int X[20]{};
	cout << "Заповніть масив 'A' цілими числами: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	cout << "Заповніть масив 'B' цілими числами: \n";
	for (int i = 0; i < size; i++)
	{
		cin >> B[i];
	}
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		X[count] = A[i];
		X[count + 1] = B[i];
		count += 2;
	}
	cout << "Варіант 'a': \n";
	for (int i = 0; i < 20; i++)
		cout << X[i] << "\t";
	for (int i = 0; i < 20; i++)
	{
		if(i<=9)
		{
			X[i] = A[i];
		}
		else
		{
			X[i] = B[i - 10];
		}
	}
	cout << "\nВаріант 'b': \n";
	for (int i = 0; i < 20; i++)
		cout << X[i] << "\t";
}
