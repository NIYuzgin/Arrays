#include <iostream>

using namespace std;
void main() {
	setlocale(LC_ALL, "");
	
	const int n = 10;
	cout << "������ ������ ��������� ������� ����� �����:" << endl;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cout << i <<"-� �������: " << endl;
		cin >> arr[i];
	}
	cout << endl << "�������� ������ � ������ �������:" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl << endl << "�������� ������ � �������� �������:" << endl;
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << "\t";
	}

	double amount = 0.0;
	double average_amount = 0.0;
	for (int i = 0; i < n; i++) {
		amount += arr[i];
		average_amount = amount / n;
	}
	cout << endl << endl << "����� ��������� �������: " << amount << endl;
	cout << endl << endl << "������� �������������� ��������� �������: " << average_amount << endl;

	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << endl << endl << "����������� �������� � �������: " << min << endl;
	cout << endl << endl << "������������ �������� � �������: " << max << endl;
}





