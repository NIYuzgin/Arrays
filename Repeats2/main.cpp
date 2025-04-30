#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	const int rows = 3;
	const int cols = 4;

	int arr[rows][cols];
	int repet = 0, num;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % (rows * cols);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
			
	cout << endl << endl << "Повторяющиеся значения:" << endl << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			repet = 0;

			for (int k = i; k < rows; k++) {
				for (int l = k > i ? 0 : j + 1; l < cols; l++) {
					num = arr[i][j];
					if (arr[k][l] == arr[i][j]) {
						repet++;
						arr[k][l] = -1;
					}
				}
			}
			if ((repet > 0) && (num > 0)) cout << "\t" << num << "\t" << "повторений: " << repet << "\t" << endl;
		}
	}
}

