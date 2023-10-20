#include "function.h"

void createArrayInt(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 51;
	}
}
void createArrayChar(char* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 26 + 'A';
	}
}
void createArrayDouble(double* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 51 * 0, 5;
	}
}

void showArrayInt(const int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void showArrayDouble(const double* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}
void showArrayChar(const char* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int minValueInt(const int* arr, const int SIZE)
{
	int minElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minElem)
		{
			minElem = arr[i];
		}
	}
	return minElem;
}
char minValueChar(const char* arr, const int SIZE)
{
	char minElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minElem)
		{
			minElem = arr[i];
		}
	}
	return minElem;
}
double minValueDoudle(const double* arr, const int SIZE)
{
	double minElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < minElem)
		{
			minElem = arr[i];
		}
	}
	return minElem;
}

int maxValueInt(const int* arr, const int SIZE)
{
	int maxElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
		}
	}
	return maxElem;
}
double maxValueDouble(const double* arr, const int SIZE)
{
	double maxElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
		}
	}
	return maxElem;
}
char maxValueChar(const char* arr, const int SIZE)
{
	char maxElem = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
		}
	}
	return maxElem;
}
