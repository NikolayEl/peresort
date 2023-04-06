#include "Search.h"


void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;	//����������� ��� ������� ����� �� ����������� � ������� �����,
		//�� ��� ����� ���������:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;	//���������� ��, ��� ����� ����������� �����
				break;	//��������� ������� ��������, � ��� ����������� ��������
			}
		}
		if (met_before)continue;	//��������� ������� ��������, � ��������� � ���������
		int count = 0;	//������� ����������
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("�������� %i ����������� %i ���\n", arr[i], count);
		//if (count)cout << "�������� " << arr[i] << " ���������� " << count << " ���" << endl;
	}
}
void Search(double arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{

		bool examination = false;
		//��������� ����������� �� �����
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k])
			{
				examination = true; //���������� �������� ���� ����� ���� �����
				break; // ��������� ������� ���� ,��� ��� �������� ��� �����������
			}
		}
		if (examination)continue; // ��������� ������ ������� �������� � �������� �� ���������
		int counter = 0;
		for (int k = i + 1; k < n; k++)
		{
			if (arr[i] == arr[k])counter++;
		}
		if (counter)cout << "����� " << arr[i] << " ����������� " << counter << " ���" << endl;
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
				examination = true; // �������� ��� ����� ����������� ����� � ���������� ���
				break; //��������� ������� � ��������� ��������
			}
		}
		if (examination)continue;
		int counter = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])counter++;
		}
		if (counter)cout << "����� " << (int)arr[i] << " ����������� " << counter << " ���" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{

			bool met_before = false;	//����������� ��� ������� ����� �� ����������� � ������� �����,
			//�� ��� ����� ���������:

			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;	//���������� ��, ��� ����� ����������� �����
						//cout << "����� ������" << endl;
						break;	//��������� ������� ��������, � ��� ����������� ��������

					}
				}
			}
			if (met_before)continue;	//��������� ������� ��������, � ��������� � ���������
			int count = 0;	//������� ����������
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
			//if (count)printf("�������� %i ����������� %i ���\n", arr[i], count);
			if (count)cout << "�������� " << arr[i][j] << " ���������� " << count << " ���" << endl;
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
					//if (examination) cout << "������ ���������� ����" << endl;    //�� ������ ����� break � ����� ������������, ��������� ���-�� ������ ��������
					if (examination) break;
				}
			}
			if (examination) continue;
			//cout << "�������" << endl;
			int counter = 0;
			for (int k = i; k < ROWS; k++)
			{
				//cout << "� �����" << endl;
				for (int l = (k == i ? (j + 1) : 0); l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l]) counter++;
				}
			}
			if (counter)cout << "������� ����� " << arr[i][j] << " ����������� " << counter << " ����" << endl;
		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool examination = false; //������� ��� ����� arr[i][j] �� �����������, �� ����� ��� ���������

			for (int k = 0; k <= j; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						examination = true; //����� ����������� �����, �� ��� ���������
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
			if (counter) cout << "��������� ����� " << (int)arr[i][j] << " ����������� " << counter << " ���" << endl;
		}
	}
}
