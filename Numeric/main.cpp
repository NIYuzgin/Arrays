#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "");

	unsigned short int number;
	unsigned short int temp;
	cout << "Ведите число в диапазоне от 0 до 65535:" << endl;
	cin >> number;

	for (temp = 32768; temp > 0; temp = temp/2) {
		if (temp & number) cout << "1";
		else cout << "0";
	}
	cout << endl;

	char ar[100];
	temp = number;
	int rem;
	int i = 1;
	
	while (temp != 0) {
		rem = temp % 16;
		if (rem < 10) rem = rem + 48;
		else rem = rem + 55;
		ar[i++] = rem;
		temp = temp / 16;
	} 
	
	cout << endl << endl << "Шестнадцатиричное число: " << endl;
	for (int j = i - 1; j > 0; j--) {
		cout << ar[j];
	}
}
