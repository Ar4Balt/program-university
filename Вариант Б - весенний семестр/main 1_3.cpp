//Напишите функцию, возвращающую ссылку на минимальное число,
//встречающееся в заданном массиве произвольного размера(аргумент функции),
//являющееся полным квадратом.Если такого числа нет, то возвратить ссылку на
//любое из максимальных чисел массива.Замените этот элемент значением k.

/*enter:20
2  8  5  1 10  5  9  9  3  5  6  6  2  8  2  2  6  3  8  7*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void enter(int length = 25)
{
	cout << endl;
	cout << endl;
	for (int i = 0; i < length; i++)
	{
		printf("%s", "#");
	}
	cout << endl;
	cout << endl;
}
void bubble_sort(int* values, int length = 20) {		//пузырёк
	for (int i = 0; i + 1 < length; ++i) {
		for (int j = 0; j + 1 < length - i; ++j) {
			if (values[j + 1] < values[j]) {
				swap(values[j], values[j + 1]);
			}
		}
	}
}
void function(int& num, int length)
{
	
}

int main_1_3()
{
	printf("%s", "hello world!");

	int n = 0; 
	cout << "Enter number: "; cin >> n;
	int* numbers = new int[n];
	enter();
	// Запись массива
	for (int i = 0; i < n; i++)
	{
		numbers[i] = 1 + rand() % 10;
		cout << numbers[i] << setw(3);
	}
	enter();

	bubble_sort(numbers);
	//function();

	enter();
	for (int i = 0; i < n; i++)
	{
		cout << numbers[i] << setw(3);
	}
	enter();

	enter();
	for (int i = 0; i < n; i++)
	{
		//if(numbers[i] == 0)
		cout << numbers[i] << setw(3);
	}
	enter();

	getchar();
	return 0;
}