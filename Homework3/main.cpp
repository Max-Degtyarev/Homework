#include<iostream>
#include<conio.h>
using namespace std;

//#define TASK_1
//#define TASK_2
#define TASK_3


void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1

	double number;
	int exponent;
	double c;
	cout << "������� �����: "; cin >> number;
	double b = 1;
	cout << "������� ���������� �������: "; cin >> exponent;
	if (exponent > 0)
	{
		do
		{
			b *= number;
			exponent--;
			
		} while (exponent != 0);
		cout << "��������� ����������: " << b << endl;
	}
	else if (exponent < 0)
	{
		do
		{
			b *= number;
			exponent++;
					
		} while (exponent != 0);
		c = 1 / b;
		cout << "��������� ����������: " << c << endl;
	}
	else if (exponent == 0)
	{
		cout << "��������� ����������: 1" << endl;

	}

#endif

#ifdef TASK_2

	setlocale(LC_ALL, "C");
	char key;
	key = _getch();
	key = 0;
	int i = 0;
	double t = 0;
	cout << "\t\t\t������� ASCII ��������" << endl;
	while (i < 256)
	{
		cout << i << "-" << key << " ";
		key++;
		t += 0.0625;
		i++;
		if (i / 16 == t)
		{
			cout << endl;
		}
	
	}

#endif



#ifdef TASK_3
	int a = 0;
	int b = 1;
	int c, n;
	cout << "������� ����� �����������: "; cin >> n;
	cout << a << " " << b << " ";
	do
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
				
	} while ((a + b) < n);
	cout << endl;


#endif





}