#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	char key;
	do
	{
		key = _getch();
		switch (key)
		{
		case 'w': cout << "������" << endl; break;
		case 's': cout << "�����" << endl; break;
		case 'a': cout << "�����" << endl; break;
		case 'd': cout << "������" << endl; break;
		case 32: cout << "������" << endl; break;
		case 13: cout << "�����" << endl; break;

		}

	} while (key != 27);


}