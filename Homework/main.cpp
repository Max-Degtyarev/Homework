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
	cout << "������� �����: "; cin >> number;
	int copy = number;
	while (copy > 0)
	{
		reverse *= 10; 
		reverse += copy % 10;
		copy /= 10; 
	}
	
	if (reverse == number)
	{
		cout << "����� ���������" << endl;

	}
	else
	{
		cout << "����� �� ���������" << endl;

	}

#endif


#ifdef TICKET

	int number;
	cout << "������� ����� ������: "; cin >> number;
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
		cout << "����� ����������" << endl;

	}
	else
	{
		cout << "����� �� ����������" << endl;

	}
	


#endif





}