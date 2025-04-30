#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void main() {
	setlocale(LC_ALL, "");

	cout << "2Darrays" << endl;

	const int rows = 5;
	const int cols = 4;

	int arr[rows][cols];
		
	// заполнение случайными числами:

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand()%100;
		}
	}

	// вывод исходного массива на экран:

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	// сортировка массива:

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			for (int k = i; k < rows; k++) {
				
				//for (int l = k == i ? j + 1 : 0; l < cols; l++) {
				for (int l = k > i ? 0 : j + 1; l < cols; l++) {
					
					// arr[i][j] - выбранный элемент
					// arr[k][l] - перебираемый элемент
					if (arr[k][l] < arr[i][j]) {
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}

	// вывод отсортированного массива на экран:

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	/*
	srand(time(NULL));
	const int rows = 5;
	const int cols = 4;

	int minRand = 1, maxRand = 9;

	int arr[rows][cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	double amount = 0.0;
	double average_amount = 0.0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			amount += arr[i][j];
			average_amount = amount / (rows + cols);
		}
	}
	cout << endl << endl << "Сумма элементов массива: " << amount << endl;
	cout << endl << endl << "Среднее арифметическое элементов массива: " << average_amount << endl;

	int min = arr[0][0];
	int max = arr[0][0];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (min > arr[i][j]) min = arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	cout << endl << endl << "Минимальное значение в массиве: " << min << endl;
	cout << endl << endl << "Максимальное значение в массиве: " << max << endl;
*/

}




