#include <iostream>
#include "Arrays\FillRand.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 8;
	int arr[n];

	FillRand(arr, n);
	
}