#include<iostream>
using namespace std;


const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Search(int arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);

#define ARRAYS_1
#define ARRAYS_2

int main() {
	//system("chcp 65001");
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
	//const int n = 10;
	//int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//FillRand(arr, n, 0, 5);
	////UniqueRand(arr, n);
	//Print(arr, n);
	//cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	//cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	//cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	//Search(arr, n);
	//Sort(arr, n);
	//Print(arr, n);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	//const int SIZE = 8;
	//double d_arr[SIZE];
	//FillRand(d_arr, SIZE);
	//Print(d_arr, SIZE);


#endif // ARRAYS_1
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арефметическое значение: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << endl << "Минимальное число в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное число в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	int number_of_shifts_2;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts_2;
		shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts_2);
	cout << "Сдвинул в лево на " << number_of_shifts_2 << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);

	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts_2);
	cout << endl << "Сдвинул в право на " << number_of_shifts_2 << " сдвига" << endl;
	Print(i_arr_2, ROWS, COLS);

	UniqueRand(i_arr_2, ROWS, COLS);
	cout << "Что-то сделал, что пока не понял, из того что понял это уменьшить числа до 10, если выше 10..." << endl;
	Print(i_arr_2, ROWS, COLS);

	cout << "Подсчет кол-ва повторений в массиве" << endl;
	Search(i_arr_2, ROWS, COLS);

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
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

void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(const int arr[], const int n)
{
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}

	return sum;
}

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

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

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts) {
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
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

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts) {
	for (int b = 0; b < number_of_shifts; b++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					arr[i][j] = arr[i - 1][COLS];
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

void UniqueRand(int arr[], const int n)
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

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			arr[i][j] = rand() % 10;
			for (int k = 0; k < i; k++)
			{
				if (arr[i][j] == arr[k][j])
				{
					i--;
					break;
				}
			}
		}
	}
}

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//Предположим что искомое число не встречалось в массиве ранее,
		//но это нужно проверить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//запоминаем то, что число встречалось ранее
				break;	//прерывает текущую итерацию, и все последующие итерации
			}
		}
		if (met_before)continue;	//прерывает текущую итерацию, и переходит к следующей
		int count = 0;	//счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		//if (count)cout << "Значение " << arr[i] << " повторяетя " << count << " раз" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			bool met_before = false;	//Предположим что искомое число не встречалось в массиве ранее,
			//но это нужно проверить:

			for (int k = 0; k < i; k++)
			{
				for (int l = 0; l < j; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;	//запоминаем то, что число встречалось ранее
						cout << "нашел повтор" << endl;
						break;	//прерывает текущую итерацию, и все последующие итерации
						
					}
				}
			}
			if (met_before)continue;	//прерывает текущую итерацию, и переходит к следующей
			int count = 0;	//счетчик повторений
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			//if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
			if (count)cout << "Значение " << arr[i][j] << " повторяетя " << count << " раз" << endl;
		}
	}
}
