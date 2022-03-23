/*/
Выполнить задания для текстового файла. Задания выполнить через функ-
ции. Размер файлов <= 64GiB.

В файлах f и g содержатся вещественные числа, упорядоченные по возраста-
нию. Получить за один проход файл чисел, встречающихся в файле f и не встреча-
ющихся в файле g.
/**/
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#define n 20

using namespace std;

class File{
private:
	int number_f,
		number_g,
		number;
	int* num = new int[n];
	ofstream file;
	string numbers,
		name_file_f = "d:\\visual studio\\вариант б - весенний семестр\\Вариант Б - весенний семестр\\f.txt",
		name_file_g = "d:\\Visual Studio\\Вариант Б - весенний семестр\\Вариант Б - весенний семестр\\g.txt",
		name_file_txt = "d:\\Visual Studio\\Вариант Б - весенний семестр\\Вариант Б - весенний семестр\\sum.txt";
public:
	/*				Quick sort                     */
	void swap(int arr[], int pos1, int pos2) {
		int temp;
		temp = arr[pos1];
		arr[pos1] = arr[pos2];
		arr[pos2] = temp;
	}
	int partition(int arr[], int low, int high, int pivot) {
		int i = low;
		int j = low;
		while (i <= high) {
			if (arr[i] > pivot) {
				i++;
			}
			else {
				swap(arr, i, j);
				i++;
				j++;
			}
		}
		return j - 1;
	}
	void quickSort(int arr[], int low, int high) {
		if (low < high) {
			int pivot = arr[high];
			int pos = partition(arr, low, high, pivot);

			quickSort(arr, low, pos - 1);
			quickSort(arr, pos + 1, high);
		}
	}
	/***********************************************/

	void voice_file_f(){
		file.open(name_file_f, ios::out);
		for (int i = 0; i < n; i++){
			num[i] = 1 + rand() % n;
		}
		quickSort(num, 0, n - 1);
		for (int i = 0; i < n; i++)
		{
			file << num[i] << endl;
		}
	}
	void voice_file_g() {
		file.open(name_file_g, ios::out);
		for (int i = 0; i < n; i++) {
			num[i] = 1 + rand() % n;
		}
		quickSort(num, 0, n - 1);
		for (int i = 0; i < n; i++) {
			file << num[i] << endl;
		}
	}
	void voice_file_txt() {
		file.open(name_file_txt, ios::out);
		for (int i = 0; i < n; i++) {
			num[i] = 0;
		}
	}
	void union_class(File& f, File& g, File& txt);
};

void File::union_class(File &f, File &g, File& txt) {
	f.file.open(f.name_file_f);
	g.file.open(g.name_file_g);
	txt.file.open(txt.name_file_txt, ios::out);
	
	int i = 0,
		j = 0,
		k = 0;
	while (true) {
		if (f.num[i] < g.num[j]) {
			txt.num[k] = f.num[i];
			k++;

			i++;
			if (i == n - 1 || j == n - 1) {
				break;
			}
		}
		if (f.num[i] > g.num[j]) {
			j++;
			if (i == n - 1 || j == n - 1) {
				break;
			}
		}
		if (f.num[i] == g.num[j]) {
			if (i == n - 1 || j == n - 1) {
				break;
			}
			j++;
			i++;
		}
	}
	txt.file.close();
	txt.file.open(txt.name_file_txt);
	for (int i = 0; i < n; i++) {
		if (txt.num[i] != 0)
		{
			txt.file << txt.num[i] << endl;
		}
		//txt.file << txt.num[i] << endl;
	}

}

int main_1_1O(){
	srand((unsigned)time(NULL));

	cout << "Hello world!!!!!!!!!!!!!!!!!!!" << endl;
	File f, g;
	File sum;

	f.voice_file_f();
	g.voice_file_g();
	sum.voice_file_txt();
	sum.union_class(f, g, sum);

	return 0;
}