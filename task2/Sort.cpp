#pragma once
#include "Sort.h"

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			//temp - буфер
			double temp = 0;
			if (arr[j] < arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		char temp;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int iteracion = 0;
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			for (int k = i; k < ROWS; ++k) {
				for (int l = k == i ? j + 1 : 0; l < COLS; ++l) {
					if (arr[k][l] < arr[i][j]) {
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iteracion++;
				}
			}
		}
	}
	cout << "Количество итераций - " << iteracion << " итераций" << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					double temp;
					if (arr[i][j] > arr[k][l])
					{
						temp = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = temp;
					}

				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int l = i; l < ROWS; l++)
			{
				for (int k = l == i ? j + 1 : 0; k < COLS; k++)
				{
					char temp;
					if (arr[i][j] > arr[l][k])
					{
						temp = arr[i][j];
						arr[i][j] = arr[l][k];
						arr[l][k] = temp;
					}
				}
			}
		}
	}
}