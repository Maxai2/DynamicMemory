#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include "Functions.h"

using namespace std;

HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	/*4. Написать следующие функции для работы с динамиче-
	ским массивом:
	a. функция распределения динамической памяти
	b. функция инициализации динамического массива
	c. функция печати динамического массива
	d. функцию удаления динамического массива
	e. функцию добавления элемента в конец массива
	f. функцию вставки элемента по указанному индексу
	g. функцию удаления элемента по указанному индексу*/

	int select = 1, key;
	byte size;
	while (true)
	{
		SetConsoleCursorPosition(w, { 0,0 });
		SetConsoleTextAttribute(w, 7);
		cout << "Input the size of array elements(in byte): ";
		cin >> size;
		initialArr(size);

		short vShort = 0;  int vInt = 0; double vDouble = 0;
		void sortSize(size, vShort, vInt, vDouble);

		cout << "\n  Short";
		cout << "\n  Int";
		cout << "\n  Double";


		//for (short i = 1; i < 5; i++)
		//{
		//	SetConsoleCursorPosition(w, { 0,i });
		//	cout << "\t\t\t";
		//}

		//SetConsoleCursorPosition(w, { 0,1 });
		//switch (select)
		//{
		//	case 1:
		//	{
		//		SetConsoleTextAttribute(w, 10);
		//		cout << "  Byte (1 b)";
		//		SetConsoleTextAttribute(w, 7);
		//		cout << "\n  Short";
		//		cout << "\n  Int";
		//		cout << "\n  Double";
		//	}
		//	break;

		//	case 2:
		//	{
		//		SetConsoleTextAttribute(w, 10);
		//		cout << "  Byte";
		//		SetConsoleTextAttribute(w, 7);
		//		cout << "\n  Short (2 b)";
		//		SetConsoleTextAttribute(w, 10);
		//		cout << "\n  Int";
		//		cout << "\n  Double";
		//	}
		//	break;

		//	case 3:
		//	{
		//		SetConsoleTextAttribute(w, 7);
		//		cout << "  Byte";
		//		cout << "\n  Short";
		//		SetConsoleTextAttribute(w, 10);
		//		cout << "\n  Int (4 b)";
		//		SetConsoleTextAttribute(w, 7);
		//		cout << "\n  Double";
		//	}
		//	break;

		//	case 4:
		//	{
		//		SetConsoleTextAttribute(w, 7);
		//		cout << "  Byte";
		//		cout << "\n  Short";
		//		cout << "\n  Int";
		//		SetConsoleTextAttribute(w, 10);
		//		cout << "\n  Double (8 b)";
		//	}
		//}

		//key = getch();
		//if (key == 224)
		//	key = getch();

		//if (key == 72 && select < 0) // Up
		//	select--;
		//else if (key == 80 && select < 5) // Down
		//	select++;



	}

	//cout << sizeof(byte) << " " << sizeof(short) <<  " " <<  sizeof(int) << " " << sizeof(double) << endl; // 1 2 4 8

}