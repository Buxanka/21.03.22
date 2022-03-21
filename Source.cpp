#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> int searchIndex(T array[], int length, T key) {
	for (int i = 0, i < length, i++)
		if (array[i] == key)
			return i;
	return -1; // При поиске элемента, которого нет в массиве выводится -1, так как позиции -1 в массиве нет
}



int main(void) {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	double a[5] = { 5.3, 8.1, 10.0, 5.3, -6.0 };

	//cout << searchIndex(a, 5, 10.0) << endl;
	int index = searchIndex(a, 5, 11.0);
		if (index == -1)
			cout << "Элемента нет в массиве\n";
		else
			cout << "Элемент стоит на " << index << " позиции\n0";


	return 0;
}