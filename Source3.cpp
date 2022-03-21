#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> int searchLastIndex(T array[], int length, T key, int  begin = -1) { // поиск с определенной позиции с конца
	if (begin == -1)
		begin = length - 1;
	for (int i = begin, i >= 0, i--)
		if (array[i] == key)
			return i;
	return -1;
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	double a[5] = { 5.3, 8.1, 10.0, 5.3, -6.0 };

	int index = searchLastIndex(a, 5, 5.3, 2);
	if (index == -1)
		cout << "Элемента нет в массиве\n";
	else
		cout << "Последняя позиция элемента = " << index << endl;


	return 0;
}