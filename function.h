#pragma once
#include <iostream>

using namespace std;

void createArrayInt(int* arr, const int SIZE);
void createArrayChar(char* arr, const int SIZE);
void createArrayDouble(double* arr, const int SIZE);

void showArrayInt(const int* arr, const int SIZE);
void showArrayDouble(const double* arr, const int SIZE);
void showArrayChar(const char* arr, const int SIZE);

int minValueInt(const int* arr, const int SIZE);
char minValueChar(const char* arr, const int SIZE);
double minValueDoudle(const double* arr, const int SIZE);

int maxValueInt(const int* arr, const int SIZE);
double maxValueDouble(const double* arr, const int SIZE);
char maxValueChar(const char* arr, const int SIZE);

template<typename T>
void sortArr(T *arr, const int SIZE)
{
	T temp = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 1,q= 0; j < SIZE && q< SIZE;q++, j++)
		{
			if (arr[j]<arr[q])
			{
				temp = arr[j];
				arr[j] = arr[q];
				arr[q] = temp;
			}
		}
	}
}

template<typename T>
void replaceElementArray(T* arr, const int SIZE, const int index, T newValue)
{
	if (index >= 0 && index < SIZE)
	{
		arr[index] = newValue;
	}
	else
	{
		cout << "Index out of range." << endl;
	}
}
