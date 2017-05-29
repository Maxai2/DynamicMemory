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

	cout << "Input the size of array elements: ";
	int size;
	cin >> size;
	int *arr = new int[size];
	cout << "\nInput the avarage";
	cout << "\nMin number: ";
	int min;
	cin >> min;
	cout << "Max number: ";
	int max;
	cin >> max;
	
	cout << endl;
	fillingArr(arr, size, min, max);
	show(arr, size);

	cout << "\n\nInput number for add to the end: ";
	int num;
	cin >> num;
	addAndInsertToEnd(arr, size, num);
	show(arr, size);

	cout << "\n\nInput number for add: ";
	cin >> num;
	cout << "\nInput link of array: ";
	int lnk;
	cin >> lnk;
	addElementByTheLink(arr, size, num, --lnk);
	show(arr, size);

	cout << "\n\nInput link of array which is delete: ";
	cin >> lnk;
	removeElementByTheLink(arr, size, --lnk);
	show(arr, size);
	cout << endl;
	//deleteFunc(arr);
	
	
}