#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	double sum = 0;
	double c;
	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//c = sum / n;
	cout << "����� ���� �������� ������� = " << sum << endl;
	cout << "������� �������������� ���� �������� ������� = " << sum/n << endl;
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] >= arr[j]) a += 1;
		}
		if (a == n) cout << "���������� �������� ������� = " << arr[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		int a = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] <= arr[j]) a += 1;
		}
		if (a == n) cout << "���������� �������� ������� = " << arr[i] << endl;
	}



}