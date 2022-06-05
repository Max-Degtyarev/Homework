#include <iostream>
using namespace std;

//#define PALINDROM
#define TICKET


void main()
{

	setlocale(LC_ALL, "Russian");

#ifdef PALINDROM
	int number;
	int reverse = 0;
	cout << "Введите число: "; cin >> number;
	int copy = number;
	while (copy > 0)
	{
		reverse *= 10; 
		reverse += copy % 10;
		copy /= 10; 
	}
	
	if (reverse == number)
	{
		cout << "Число палиндром" << endl;

	}
	else
	{
		cout << "Число не палиндром" << endl;

	}

#endif


#ifdef TICKET

	int number;
	cout << "Введите номер билета: "; cin >> number;
	int a = number / 1000; int b = number % 1000;
	int i = 0; int j = 0;
	while (a > 0)
	{
		i += a % 10;
		a /= 10;

	}
	while (b > 0)
	{
		j += b % 10;
		b /= 10;

	}
	
	if (i == j)
	{
		cout << "Билет счастливый" << endl;

	}
	else
	{
		cout << "Билет не счастливый" << endl;

	}
	


#endif





}