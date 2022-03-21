#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <typename T> int searchIndex(T array[], int length, T key, int begin = 0) {
	for (int i = begin, i < length, i++)
		if (array[i] == key)
			return i;
	return -1;
}


void showWord(char array[], int length) {
	for (int i = 0; i < length; i++)
		cout << array[i];
	cout << endl;
}

void subWord(char word[], int length, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	cout << "Символьный массив: /n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	showWord(word, 8);
	cout << "Введите символ: ";
	char sym;
	cin >> sym;
	cout << "Подслово:\n";
	subWord(word, 8, sym);




	return 0;
}

void subWord(char word[], int length, char sym) {
	int index = searchIndex(word, length, sym);
	if (index != -1) {
		for (int i = index; i < length; i++)
			cout << word[i];
		cout << endl;
	}
	else
		cout << "ERROR\n";
}