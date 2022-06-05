#include<iostream>
using namespace std;

//#define CHESS
#define CLASSWORK

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define DOWN_LEFT_ANGLE (char)192
#define DOWN_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196 << (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX "\xDB\xDB" 
// \x - позвол€ет включить аски символ в строковую константу
// после \x об€зательно идет шестнадцатеричный код символа (Hex-код)
#define BLACK_BOX "  " 
//#define WHITE_BOX (char)219 << (char)219



void main()
{
	
#ifdef CHESS
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	cout << (char)218;
	for (int i = 0; i < n * 2; i++)
		cout << (char)196;
	cout << (char)191;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (char)179;
		for (int j = 0; j < n; j++)
		   	if ((i + j) % 2 == 0)cout << (char)219 << (char)219;
			else cout << /*(char)178 << (char)178*/"  ";
		cout << (char)179;
		cout << endl;
	}
	cout << (char)192;
	for (int i = 0; i < n * 2; i++)
		cout << (char)196;
	cout << (char)217;
#endif

#ifdef CLASSWORK

	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	/*for (int i = 0; i < 256; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}*/
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n && j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
				//i % 2 == j % 2 ? cout << WHITE_BOX : cout << "  ";
				//(i + j) % 2 == 0 ? cout << WHITE_BOX : cout << "  ";
		}
		cout << endl;


	}





#endif






}


