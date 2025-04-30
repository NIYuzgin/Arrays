#include <iostream>

using namespace std;
void main()
{
	setlocale(LC_ALL, "");

	const int rows = 3;
	const int cols = 4;

	int arr[rows][cols];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			bool unique;
			do
			{
				arr[i][j] = rand() % (rows * cols);
				
				unique = true;
				for (int k = 0; k <= i; k++) {
					//for (int l = 0; l < (k < i ? cols : j); l++) 

					for (int l = 0; l < (k == i ? j : cols); l++) {
						if (arr[i][j] == arr[k][l]) {
							unique = false;
							break;
						}
					}
					if (!unique) break;
				}
			} while (!unique);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
