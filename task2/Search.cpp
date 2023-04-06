#include "Search.h"


void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//ѕредположим что искомое число не встречалось в массиве ранее,
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
		if (count)printf("«начение %i повтор€етс€ %i раз\n", arr[i], count);
		//if (count)cout << "«начение " << arr[i] << " повтор€ет€ " << count << " раз" << endl;
	}
}
void Search(double arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{

		bool examination = false;
		//ѕровер€ем встречалась ли ранее
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				examination = true; //—тановитс€ истинной если число было ранее
				break; // ѕрерывает текущий цикл ,ибо уже вы€снили что встречалось
			}
		}
		if (examination)continue; // ѕрерывает только текущую итерацию и начинает со следующей
		int counter = 0;
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] == arr[k])counter++;
		}
		if (counter)cout << "„исло " << arr[i] << " повтор€етс€ " << counter << " раз" << endl;
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
				examination = true; // ѕонимаем что число встречалось ранее и запоминаем это
				break; //ѕрерываем текущую и следующие итерации
			}
		}
		if (examination)continue;
		int counter = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter)cout << "„исло " << (int)arr[i] << " повтор€етс€ " << counter << " раз" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			bool met_before = false;	//ѕредположим что искомое число не встречалось в массиве ранее,
			//но это нужно проверить:

			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;	//запоминаем то, что число встречалось ранее
						//cout << "нашел повтор" << endl;
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
			//if (count)printf("«начение %i повтор€етс€ %i раз\n", arr[i], count);
			if (count)cout << "«начение " << arr[i][j] << " повтор€ет€ " << count << " раз" << endl;
		}
	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
					//if (examination) cout << "Ћишнее повторение было" << endl;    //не увидел здесь break у ќлега јнатольевича, подсчитал кол-во лишних итераций
					if (examination) break;
				}
			}
			if (examination) continue;
			//cout << "ѕерешел" << endl;
			int counter = 0;
			for (int k = i; k < ROWS; k++)
			{
				//cout << "¬ цикле" << endl;
				for (int l = (k == i ? (j + 1) : 0); l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l]) counter++;
				}
			}
			if (counter)cout << "ƒробное число " << arr[i][j] << " повтор€етс€ " << counter << " раза" << endl;
		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool examination = false; //считаем что число arr[i][j] не повтор€етс€, но будем это провер€ть

			for (int k = 0; k <= j; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						examination = true; //число повтор€лось ранее, мы это запомнили
						break;
					}
				}
				if (examination) break;
			}
			if (examination) continue;

			int counter = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = (k == i ? (j + 1) : 0); l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l]) counter++;
				}
			}
			if (counter) cout << "„аровское число " << (int)arr[i][j] << " встречаетс€ " << counter << " раз" << endl;
		}
	}
}
