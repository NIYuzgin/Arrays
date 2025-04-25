#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void main() {
	setlocale(LC_ALL, "");

	/*
		3. Массив из десяти элементов заполнить уникальными случайными числами 
		   в диапазоне от 70 до 80
	*/
	
	srand(time(NULL));
	const int n = 10;
	int arr[n];
	int minRand = 70, maxRand = 81;

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}
