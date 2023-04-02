#include<iostream>
using namespace std;


const int ROWS = 3;
const int COLS = 4;

int Factorial(const int factorial);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 9);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
int Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
double Avg(const char arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
double minValueIn(const double arr[], const int n);
char minValueIn(const char arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
double maxValueIn(const double arr[], const int n);
char maxValueIn(const char arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);

#define ARRAYS_1
#define ARRAYS_2

int main() 
{
	system("chcp 65001");
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
		//--------------------------------------------------------------------------------
		// Проверка факториал

		//int factorial;
		//cout << "Введите число возводимое в факториал: ";
		//cin >> factorial;
		//cout << "Факторила числа " << factorial << " равен: " << Factorial(factorial) << endl;

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
	//int i_arr_2[ROWS][COLS];
	//FillRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Средне-арефметическое значение: " << Avg(i_arr_2, ROWS, COLS) << endl;
	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//cout << endl << "Минимальное число в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	//cout << "Максимальное число в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	//int number_of_shifts_2;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts_2;
	//shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts_2);
	//cout << "Сдвинул в лево на " << number_of_shifts_2 << " сдвига" << endl;
	//Print(i_arr_2, ROWS, COLS);

	//shiftRight(i_arr_2, ROWS, COLS, number_of_shifts_2);
	//cout << endl << "Сдвинул в право на " << number_of_shifts_2 << " сдвига" << endl;
	//Print(i_arr_2, ROWS, COLS);

	//UniqueRand(i_arr_2, ROWS, COLS);
	//cout << "Что-то сделал, что пока не понял, из того что понял это уменьшить числа до 10, если выше 10..." << endl;
	//Print(i_arr_2, ROWS, COLS);

	//cout << "Подсчет кол-ва повторений в массиве" << endl;
	//Search(i_arr_2, ROWS, COLS);
}

int Factorial(const int factorial)
{
	int total = 1;
	for (int i = 1; i <= factorial; i++)
	{
		total *= i;
	}
	return total;
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
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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
void Print(const char arr[], const int n)
{
	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << "\t";
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
double Sum(const double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)arr[i];
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
double Avg(const double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(const char arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)arr[i];
	}
	return sum / n;
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
double minValueIn(const double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char minValueIn(const char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
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
double maxValueIn(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char maxValueIn(const char arr[], const int n) 
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}return max;
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
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n - 1; i++) // Здесь изменил от Олега Анатольевича на "n - 1", по моему мнению массив выйдет за пределы
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n - 1; i++)  // Здесь изменил от Олега Анатольевича на "n - 1", по моему мнению массив выйдет за пределы
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
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
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
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((int)(((double)rand() / rand())*100))/100; //Заморочился округлением до сотых
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
void UniqueRand(char arr[], const int n)
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
void Search(double arr[], const int n)
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
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool examination = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				examination = true; // Понимаем что число встречалось ранее и запоминаем это
				break; //Прерываем текущую и следующие итерации
			}
		}
		if (examination)continue;
		int counter = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter)cout << "Число " << (int)arr[i] << " повторяется " << counter << " раз" << endl;
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

			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
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
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
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
