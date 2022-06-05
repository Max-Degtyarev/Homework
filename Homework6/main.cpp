#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
#define TASK_6


void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = n;
	for (int i = 0; i < n; i++)
	{
		a -= 1;
		for (int i = a; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;


	}

#endif

#ifdef TASK_2
	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = n - n - 1;
	for (int i = 0; i < n; i++)
	{
		a += 1;
		for (int i = a; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}



#endif

#ifdef TASK_3

	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = n - n - 1;
	int b = n;
	for (int i = 0; i < n; i++)
	{
		a += 1;
		for (int i = a; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;
		b -= 1;
		for (int j = b; j < n; j++)cout << "  ";

	}

#endif

#ifdef TASK_4

	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = n;
	int b = n - n;
	for (int i = 0; i < n; i++)
	{

		b += 1;
		for (int j = b; j < n; j++)cout << "  ";
		a -= 1;
		for (int i = a; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;



	}

#endif


#ifdef TASK_5

	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = n + 1;
	int b = n - n;
	int c = n - n;
	for (int i = 0; i < n; i++)
	{
		b += 1;
		for (int j = b; j < n; j++)cout << " ";
		a -= 1;
		cout << "/";
		for (int i = a; i < n; i++)cout << "  ";
		cout << "\\";
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		c += 1;
		cout << "\\";
		for (int i = c; i < n; i++)cout << "  ";
		cout << "/";
		cout << endl;
		b -= 1;
		for (int j = b; j < n; j++)cout << " ";
	}

#endif


#ifdef TASK_6

	int n;
	cout << "¬ведите число: "; cin >> n;
	int a = -1;
	int b = n / 2;
	for (int i = 0; i < n; i++)
	{
		a++;
		if (n % 2 != 0)
		{
			if (a % 2 == 0)
			{
				for (int j = 0; j < b; j++)cout << "+ " << "- ";
				cout << "+ ";
			}
			else
			{
				for (int j = 0; j < b; j++)cout << "- " << "+ ";
				cout << "- ";
			}
		}
		else if (a % 2 == 0)
		{
			for (int j = 0; j < b; j++)cout << "+ " << "- ";
		}
		else
		{
			for (int j = 0; j < b; j++)cout << "- " << "+ ";
		}
		cout << endl;
	}
#endif





}

