#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число: "; cin >> n;
	setlocale(LC_ALL, "C");
	cout << (char)218;
	for (int i = 0; i < n * 6; i++)
		cout << (char)196;
	cout << (char)191;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int r = 0; r <= n + 1; r++)
			{
				if (r == 0 || r == n + 1) cout << (char)179;
				else if ((i + r) % 2 != 0)
				{
					for (int d = 0; d < 6; d++)
					{
						cout << (char)219;
					}
				}
				else
				{
					for (int d = 0; d < 6; d++)
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
	cout << (char)192;
	for (int i = 0; i < n * 6; i++)
		cout << (char)196;
	cout << (char)217;


}