#include<iostream>
using namespace std;

#define TASK_1
//#define TASK_2


void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int n;
	cout << "Введите число: "; cin >> n;
	int a = n;
	for (int i = 0; i < n; i++) // этот for повторяет вывод строки из *
	{
		a -= 1;
		for (int i = a; i < n; i++) // этот for повторяет вывод *
		{
			cout << "* ";

		}
		cout << endl;

	}

#endif

#ifdef TASK_2
	int n;
	cout << "Введите число: "; cin >> n;
	int a = n - n - 1;
	for (int i = 0; i < n; i++) // этот for повторяет вывод строки из *
	{
		a += 1;
		for (int i = a; i < n; i++) // этот for повторяет вывод *
		{
			cout << "* ";

		}
		cout << endl;

	}

#endif



}

