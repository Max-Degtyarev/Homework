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
		case 'w': cout << "Вперед" << endl; break;
		case 's': cout << "Назад" << endl; break;
		case 'a': cout << "Влево" << endl; break;
		case 'd': cout << "Вправо" << endl; break;
		case 32: cout << "Прыжок" << endl; break;
		case 13: cout << "Огонь" << endl; break;

		}

	} while (key != 27);


}