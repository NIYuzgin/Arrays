﻿#include <iostream>
#include <Windows.h>

using namespace std;
void main() {
	
	setlocale(LC_ALL, "");
	
	cout << endl << endl << "Проект 'Shift'" << endl << endl;
	const int size = 10;
	int ar[size];
	for (int i = 0; i < size; i++) {
		ar[i] = i;
	}
	cout << endl << "Исходный массив:" << endl;

	for (int i = 0; i < size; i++) {
		cout << ar[i] << "\t";
	}
	cout << endl << endl;

	/*
	int m;
	cout << endl << "Введите количество элементов для сдвига влево:" << endl;
	cin >> m;
	for (int j = 0; j < m; j++) {
		int temp = ar[0];
		//Sleep(1000);
		//system("CLS");
		for (int i = 0; i < size - 1; i++) {
			ar[i] = ar[i + 1];
		}
		ar[size - 1] = temp;
		for (int i = 0; i < size; i++) {
			cout << ar[i] << "\t";
		}
		cout << endl << endl;
	}

*/

	int l;
	cout << endl << "Введите количество элементов для сдвига вправо:" << endl;
	cin >> l;
	for (int j = 0; j < l; j++) {
		int temp = ar[size - 1];
		for (int i = size - 1; i > 0; i--) {
			ar[i] = ar[i - 1];
			}
		ar[0] = temp;
		for (int i = 0; i < size; i++) {
			cout << ar[i] << "\t";
		}
		cout << endl << endl;
	}














}




