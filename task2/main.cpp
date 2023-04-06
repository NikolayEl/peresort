#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shift.h"
#include "Search.h"

#define ARRAYS_1
#define ARRAYS_2

int main() 
{
	system("chcp 65001");
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
		//--------------------------------------------------------------------------------
		// Массивы
	const int n = 10;


	//------------------------------------------------------------------------------------------------------
	//                     Здесь идет проверка для одномерных чаровских массивов
	//char arr[n];
	//FillRand(arr, n);
	//Print(arr, n);
	//cout << "Сумма массива чаровских цифр: " << Sum(arr, n) << endl;
	//cout << "Среднее чаровских чисел: " << Avg(arr, n) << endl;
	//cout << "Минимальное чаровское число: " << (int)minValueIn(arr, n) << endl;
	//cout << "Максимальное чаровское число: " << (int)maxValueIn(arr, n) << endl;
	//Sort(arr, n);
	//cout << "Массив после сортировки" << endl;
	//Print(arr, n);
	//UniqueRand(arr, n);
	//cout << "Заполняем массив уникальными чаровскими числами" << endl;
	//Print(arr, n);

	//--------------------------------------
	// Проверка функции Search
	//char arr[n] = { 2, 3, 2, 4, 1, 2, 3, 2, 4, 1 };
	//Print(arr, n);
	//cout << "Считаем число повторений" << endl;
	//Search(arr, n);

	//int number_of_shifts;
	//cout << "Сдвигаем на: ";
	//cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//cout << "Массив после сдвига на " << number_of_shifts << " значения вправо" << endl;
	//Print(arr, n);
	//shiftLeft(arr, n, number_of_shifts);
	//cout << "Массив после сдвига на " << number_of_shifts << " значения влево" << endl;
	//Print(arr, n);

	//--------------------------------------------------------------------------------------------------------
	//                       Здесь идет проверка для одномерных дабловских массивов
	//int arr[n];
	//FillRand(arr, n);
	//Print(arr, n);
	//cout << "Среднее значение массива дробных чисел: " << Avg(arr, n) << endl;
	//cout << "Сумма дробных чисел в массиве: " << Sum(arr, n) << endl;
	//cout << "Минимальное число в массиве дробных чисел: " << minValueIn(arr, n) << endl;
	//cout << "Максимальное число в массиве дробных чисел: " << maxValueIn(arr, n) << endl;
	//Sort(arr, n);
	//cout << "Массив после сортировки" << endl;
	//Print(arr, n);
	//UniqueRand(arr, n);
	//cout << "Заполняем массив уникальными дробными числами" << endl;
	//Print(arr, n);


	//----------------
	//Проверка Search double
	//double arr[n] = { 0.2, 0.3, 0.2, 0.4, 0.1, 0.2, 0.3, 0.2, 0.4, 0.1 }; // Делаю так ибо в моем случае все уникальные
	//int counter = 0;
	//Print(arr, n);
	//Search(arr, n);

	//------------------
		//Проверка сдвигов
		//int number_of_shifts;
		//cout << "Сдвигаем на: ";
		//cin >> number_of_shifts;
		//shiftRight(arr, n, number_of_shifts);
		//cout << "Массив после сдвига на " << number_of_shifts << " значения вправо" << endl;
		//Print(arr, n);
		//shiftLeft(arr, n, number_of_shifts);
		//cout << "Массив после сдвига на " << number_of_shifts << " значения влево" << endl;
		//Print(arr, n);


#endif  ARRAYS_1
	//-------------------------------------------------------------------------------
	//                                Проверка двумерных массивов
	
	int i_arr_2[ROWS][COLS];
	//double i_arr_2[ROWS][COLS];
	//char i_arr_2[ROWS][COLS];
	//UniqueRand(i_arr_2, ROWS, COLS);
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арефметическое значение: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl << "Минимальное число в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << endl << "Минимальное число в массиве CHAR: " << (int)minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное число в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное число в массиве CHAR: " << (int)maxValueIn(i_arr_2, ROWS, COLS) << endl;

	int number_of_shifts_2 = 2;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts_2;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts_2);
	cout << "Сдвинул в лево на " << number_of_shifts_2 << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);

	//shiftRight(i_arr_2, ROWS, COLS, number_of_shifts_2);
	//cout << endl << "Сдвинул в право на " << number_of_shifts_2 << " сдвига" << endl;
	//Print(i_arr_2, ROWS, COLS);

	//UniqueRand(i_arr_2, ROWS, COLS);
	//cout << "Что-то сделал, что пока не понял, из того что понял это уменьшить числа до 10, если выше 10..." << endl;
	//Print(i_arr_2, ROWS, COLS);

	//cout << "Подсчет кол-ва повторений в массиве" << endl;
	Search(i_arr_2, ROWS, COLS);
}