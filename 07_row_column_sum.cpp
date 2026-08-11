#include <iostream>
using namespace std;

int main() {
	int a[2][2];
	int i, j, sum;

	cout << "Enter elements of matrix: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	//sum of each row
	cout << "Sum of each row: \n";
	for (i = 0; i < 2; i++) {
		sum = 0;
		for (j = 0; j < 2; j++) {
			sum = sum + a[i][j];
		}
		cout << "Row" << i + 1 << " = " << sum << endl;
	}
	//sum of each column
	cout << "Sum of each column: \n";

	for (j = 0; j < 2; j++) {
		sum = 0;
		for (i = 0; i < 2; i++) {
			sum = sum + a[i][j];
		}
		cout << "Column" << j + 1 << "=" << sum << endl;
	}
	return 0;
}