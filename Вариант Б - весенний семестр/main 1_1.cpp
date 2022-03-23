#include <iostream>
#include <iomanip>

using namespace std;

int main_1_1()
{
	int m = 5;
	int n = 5;
	const int number_n = 5;
	const int number_m = 5;

	int numbers = m * n;

	int array[number_m][number_n] = {};
	
	//�� �������
	for (int x = 0; x < m; x++) 
	{
		array[x][0] = numbers;
		numbers--;
	}
	for (int y = 1; y < n; y++)
	{
		array[m - 1][y] = numbers;
		numbers--;
	}
	for (int x = m - 2; x >= 0; x--) 
	{
		array[x][n - 1] = numbers;
		numbers--;
	}
	for (int y = n - 2; y >= 1; y--) 
	{
		array[0][y] = numbers;
		numbers--;
	}

	//�������� ��������. ���������� ��������� ������ � �����
	//���������� ������, ������� ���������� ��������� ���������.
	int c = 1;
	int d = 1;

	while (numbers > 1) { 

		//�������� ����.
		while (array[c + 1][d] == 0)
		{
			array[c][d] = numbers;
			numbers--;
			c++;
		}
		//�������� ������.
		while (array[c][d + 1] == 0)
		{
			array[c][d] = numbers;
			numbers--;
			d++;
		}

		//�������� �����.
		while (array[c - 1][d] == 0)
		{
			array[c][d] = numbers;
			numbers--;
			c--;
		}

		//�������� �����.
		while (array[c][d - 1] == 0) 
		{
			array[c][d] = numbers;
			numbers--;
			d--;
		}

	}

	//������� ������������� ������.
	for (int x = 0; x < m; x++)
	{
		for (int y = 0; y < n; y++)
		{
			if (array[x][y] == 0)
			{
				array[x][y] = numbers;
			}
		}
	}

	for (int x = 0; x < m; x++) 
	{
		for (int y = 0; y < n; y++) 
		{
			if (array[x][y] < 10) 
			{
				cout << setw(3) << array[x][y];
			}
			else
			{
				cout << setw(3) << array[x][y];
			}
		}
		cout << endl;
	}
	return 0;
}