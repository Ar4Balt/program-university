#include <iostream>
#include <fstream>

using namespace std;
template <typename T>

void sum(T a) {
	cout << a << endl;
}

int man() {
	fstream file;
	int number;
	file.open("text.txt", ios::binary);
	file >> number;
	sum(2);
	return 0;
}