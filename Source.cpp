#include <iostream>
#include <time.h>
#include "function.h"

using namespace std;

///////////////////////////////////  Task #1 ///////////////////////
#define MIN_VALUE(a,b) (a)>(b)?(b):(a)
#define MAX_VALUE(a,b) (a)>(b)?(a):(b)
#define POW(a) a*a
#define POW_2(a,b) pow(a,b)
#define EVEN(x) x%2==0? true:false
#define ODD(x) x%2==1? true:false

////////////////////////////////////// Task #2 ///////////////////////
#define N 20// const для довжини масива. 

//#define INTEGER
//#define DOUBLE
#define CHAR

#ifdef INTEGER
#define show showArrayInt(a,N)
#define create createArrayInt(a,N)
#define min minValueInt(a,N)
#define max maxValueInt(a,N)
#endif // INTEGER

#ifdef DOUBLE
#define show showArrayDouble(a,N)
#define create createArrayDouble(a,N)
#define min minValueDouble(a,N)
#define max maxValueDouble(a,N)
#endif // DOUBLE

#ifdef CHAR
#define show showArrayChar
#define create createArrayChar
#define min minValueChar
#define max maxValueChar
#endif // CHAR

int main()
{
	srand(time(NULL));

#ifdef INTEGER
	int arr[N];
#endif // INTEGER
#ifdef DOUBLE
	int arr[N];
#endif // DOUBLE

#ifdef CHAR
	char arr[N];
#endif // CHAR
	
	create(arr, N);
	show(arr, N);
	auto minValue = min(arr, N);
	auto maxValue = max(arr, N);
	sortArr(arr, N);
	show(arr, N);
	replaceElementArray(arr, N, 6, maxValue);

	return 0;
}