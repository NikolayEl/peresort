#include<iostream>
using namespace std;



const int ROWS = 3;
const int COLS = 4;

template <typename T> void Print(const T arr[], const int n);
template <typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);


template <typename T> void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void UniqueRand(T arr[], const int n);
void UniqueRand(double arr[], const int n);
template <typename T> void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);


template <typename T> T Sum(const T arr[], const int n);
template <typename T> T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> double Avg(const T arr[], const int n);
template <typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);


template <typename T> T minValueIn(const T arr[], const int n);
template <typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> T maxValueIn(const T arr[], const int n);
template <typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void Sort(T arr[], const int n);
template <typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T> void shiftLeft(T arr[], const int n, int number_of_shifts);
template <typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template <typename T> void shiftRight(T arr[], const int n, int number_of_shifts);
template <typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template <typename T> void Search(T arr[], const int n);
template <typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);
 
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Сортируем массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	UniqueRand(arr, n);
	cout << "уникальный массив" << endl;
	Print(arr, n);
	FillRand(arr, n);
	cout << "Заново заполним массив и подсчитаем повторения" << endl;
	Print(arr, n);
	Search(arr, n);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	
	//------------------------------------------------------------
	// Одномерные массивы
	
	//const int SIZE = 8;
	//double d_arr[SIZE];
	//FillRand(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//cout << "сумма элементов: " << Sum(d_arr, SIZE) << endl;
	//cout << "среднее арифметическое элемнтов массива: " << Avg(d_arr, SIZE) << endl;
	//Print(d_arr, SIZE);
	//cout << "Минимальное значение в массиве:  " << minValueIn(d_arr, SIZE) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl;
	//Sort(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//cout << endl;
	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);
	//shiftRight(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);

	//-------------------------------------------------------------
	//     двумерные массивы
	cout << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	cout << "Массив 2-у мерный" << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Сортируем массив: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	int number_of_shifts = 2;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Влево " << number_of_shifts << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Вправо " << number_of_shifts << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	cout << "уникальный массив" << endl;
	Print(i_arr_2, ROWS, COLS);
	FillRand(i_arr_2, ROWS, COLS);
	cout << "Заново заполним массив и подсчитаем повторения" << endl;
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);


}

template <typename T> T Sum(const T arr[], const int n)
{
	//Вычисление суммы элементов массива:
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T> T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

template <typename T> double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T> T minValueIn(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template <typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template <typename T> T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template <typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template <typename T> void Sort(T arr[], const int n)
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
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					T temp;
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

template <typename T> void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (i == COLS - 1 && j != ROWS)
				{
					arr[i][j] = arr[i + 1][0];
				}
				else
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}

template <typename T> void shiftRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//shiftLeft(arr, n, n - number_of_shifts);
}
template <typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts) 
{
	for (int b = 0; b < number_of_shifts; b++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					arr[i][j] = arr[i - 1][COLS - 1];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
		arr[0][0] = buffer;
	}
}

template <typename T> void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		bool examination = false;
		//Проверяем встречалась ли ранее
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				examination = true; //Становится истинной если число было ранее
				break; // Прерывает текущий цикл ,ибо уже выяснили что встречалось
			}
		}
		if (examination)continue; // Прерывает только текущую итерацию и начинает со следующей
		int counter = 0;
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] == arr[k])counter++;
		}
		if (counter)cout << "Число " << arr[i] << " повторяется " << counter << " раз" << endl;
	}
}
template <typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool examination = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					//cout << arr[i][j] << " " << arr[k][l] << " ";
					if (arr[i][j] == arr[k][l])
					{
						examination = true;
						//cout << "break work" << endl;
						break;
					}
					//if (examination) cout << "Лишнее повторение было" << endl;    //не увидел здесь break у Олега Анатольевича, подсчитал кол-во лишних итераций
					if (examination) break;
				}
			}
			if (examination) continue;
			//cout << "Перешел" << endl;
			int counter = 0;
			for (int k = i; k < ROWS; k++)
			{
				//cout << "В цикле" << endl;
				for (int l = (k == i ? (j + 1) : 0); l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l]) counter++;
				}
			}
			if (counter)cout << "Число " << arr[i][j] << " повторяется " << counter << " раза" << endl;
		}
	}
}

template <typename T> void FillRand(T arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		arr[i] /= 10;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
			arr[i][j] /= 10;
		}
	}
}

template <typename T> void UniqueRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		arr[i] /= 10;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
template <typename T> void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true; //считаем что число уникальное изначально
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;

						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
			arr[i][j] /= 10;
			bool examination = false;
			//cout << "Сейчас j = " << j << endl; //проверка нумерации j
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						examination = true;
						j--;
						//cout << "Повтор" << arr[k][l] << endl; //проверка сработки
						break;
					}
				}
				if (examination)break;
			}
			//cout << "Потом j = " << j << endl; //проверка нумерации j

		}
	}
}

template <typename T> void Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
template <typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
