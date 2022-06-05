#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_61
//#define TASK_62
//#define TASK_7
//#define CLASS_SOLUTION_1
//#define CLASS_SOLUTION_2




void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "* ";
		cout << endl;

	}
#endif


#ifdef TASK_2

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		cout << "* ";
		cout << endl;

	}
#endif


#ifdef TASK_3

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;

	}
#endif




#ifdef TASK_4

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n - 1; j++)cout << "  ";
		for (int j = 0; j < i + 1; j++)cout << "* ";
		cout << endl;
	}
#endif



#ifdef TASK_5

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n-1; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif


#ifdef TASK_61

	int n;
	cout << "¬ведите число: "; cin >> n;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n/2; i++)
		{
			for (int i = 0; i < n/2; i++)cout << "+ - "; cout << endl;
			for (int i = 0; i < n/2; i++)cout << "- + "; cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < n/2; i++)
		{
			for (int i = 0; i < n/2; i++)cout << "+ - "; cout << "+ "; cout << endl;
			for (int i = 0; i < n/2; i++)cout << "- + "; cout << "- "; cout << endl;
		}
		for (int i = 0; i < n/2; i++)cout << "+ - ";
		cout << "+ ";
	}
#endif


#ifdef TASK_62

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
				for (int j = 0; j < b; j++)cout << "+ " << "- "; cout << "+ ";
			}
			else
			{
				for (int j = 0; j < b; j++)cout << "- " << "+ "; cout << "- ";
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


#ifdef TASK_7

	int n;
	cout << "¬ведите число: "; cin >> n;
	if (n % 2 == 0)
	{
		for (int i = 0; i < n / 2; i++)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < 5; j++)cout << "* ";
					for (int j = 0; j < 5; j++)cout << "  ";
				}
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < 5; j++)cout << "  ";
					for (int j = 0; j < 5; j++)cout << "* ";
				}
				cout << endl;
			}
		}
	}
	else
	{
		for (int i = 0; i < n / 2; i++)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < 5; j++)cout << "* ";
					for (int j = 0; j < 5; j++)cout << "  ";
				}
				cout << "* * * * *";
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < 5; j++)cout << "  ";
					for (int j = 0; j < 5; j++)cout << "* ";
				}
				cout << endl;
			}
		}
		for (int i = 0; i < 1; i++)
		{
			for (int i = 0; i < 5; i++)
			{
				for (int i = 0; i < n / 2; i++)
				{
					for (int j = 0; j < 5; j++)cout << "* ";
					for (int j = 0; j < 5; j++)cout << "  ";

				}
				cout << "* * * * *";
				cout << endl;
			}
		}
	}
#endif




#ifdef CLASS_SOLUTION_1

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " ";
		cout << "/";
		for (int j = 0; j < i*2; j++)cout << " ";
		cout << "\\";
		cout << endl;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";
		cout << "\\";
		for (int j = 0; j < (n-1-i)*2; j++)cout << " ";
		cout << "/";
		cout << endl;

	}

#endif


#ifdef CLASS_SOLUTION_2

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";*/
			/*(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";*/
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");

		}
		cout << endl;

	}

#endif

	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= n; j++)
			cout << (j == n ? "\n" : (i + j) % 2 == 0 ? "+ " : "- ");
	cout << endl;

	










}