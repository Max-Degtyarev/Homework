#include<iostream>
using namespace std;

#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	int n;
	cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> n;
	for (double a = 0, b = 1, c = a + b, i = 0; i < n; i++)
	{
		cout << a << " ";
		//a = b, b = c, c = a + b;
		c = (a = b) + (b = c);


	}

#endif


#ifdef TASK_2

	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, j = 9, k = 10;
	for (int i = 1; i < 11; i++)
	{
		cout << a << " * " << i << " = " << a * i << "\t";
		cout << b << " * " << i << " = " << b * i << "\t";
		cout << c << " * " << i << " = " << c * i << "\t";
		cout << d << " * " << i << " = " << d * i << "\t";
		cout << e << " * " << i << " = " << e * i << endl;

	}
	cout << endl << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << f << " * " << i << " = " << f * i << "\t";
		cout << g << " * " << i << " = " << g * i << "\t";
		cout << h << " * " << i << " = " << h * i << "\t";
		cout << j << " * " << i << " = " << j * i << "\t";
		cout << k << " * " << i << " = " << k * i << endl;

	}

#endif


#ifdef TASK_3

	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, j = 9, k = 10;
	for (int i = 1; i < 11; i++)
	{
		cout << "\t" << i;
	}
	cout << endl << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << a * i << "\t";
		cout << a * i << "\t";
		cout << b * i << "\t";
		cout << c * i << "\t";
		cout << d * i << "\t";
		cout << e * i << "\t";
		cout << f * i << "\t";
		cout << g * i << "\t";
		cout << h * i << "\t";
		cout << j * i << "\t";
		cout << k * i << endl << endl;

	}


#endif





}