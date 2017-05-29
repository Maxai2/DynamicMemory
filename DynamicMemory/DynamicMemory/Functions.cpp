#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void fillingArr(int *arr, int size, int min, int max)
{
	srand(time(0));
//	int form = (max - min) + min;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min) + min;
	}
}

void show(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void addAndInsertToEnd(int *&arr, int &size, int num)
{
	int *temp = new int[++size];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[size - 1] = num;
	delete[]arr;
	arr = temp;
}

void addElementByTheLink(int *&arr, int &size, int num, int lnk)
{
	int *temp = new int[++size];

	for (int i = 0; i < lnk; i++)
	{
		temp[i] = arr[i];
	}
	temp[lnk] = num;
	for (int i = lnk + 1; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;
}

void removeElementByTheLink(int *&arr, int &size, int lnk)
{
	int *temp = new int[--size];

	for (int i = 0; i < lnk; i++)
	{
		temp[i] = arr[i];
	}

	for (int i = lnk + 1; i < size; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[]arr;
	arr = temp;
}

void deleteFunc(int *arr)
{
	delete[] arr;
}