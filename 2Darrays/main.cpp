#include <iostream>
#include <stdlib.h>
#include <time.h>



using namespace std;
void main() {
	setlocale(LC_ALL, "");

	cout << "2Darrays" << endl;

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
}




