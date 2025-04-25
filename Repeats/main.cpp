#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void main() {
	setlocale(LC_ALL, "");

	/*
		4. Есть массив из десяти элементов, заполненный случайными числами от 0 до 5.
   Нужно найти повторяющиеся значения в этом массиве, вывести их на экран,
   и для каждого повторяющегося значения вывести на экран количество повторений.
	*/

	srand(time(NULL));
	const int n = 10;
	int arr[n];
	int minRand = 0, maxRand = 6;
	int repet = 0, num;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	cout << endl << "Исходный массив:" << endl << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl << endl << "Повторяющиеся значения:" << endl << endl;

	for (int i = 0; i < n; i++) {
		repet = 0;
		num = arr[i];

		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				repet++;
				arr[j] = -1;
			}
		}
		if ((repet > 0) && (num > 0)) cout << "\t" << num << "\t" << "повторений: " << repet << "\t" << endl;
	}
}