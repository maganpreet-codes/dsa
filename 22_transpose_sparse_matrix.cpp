#include <iostream>
using namespace std;

int main() {
	int a[100][3], transpose[100][3];
	int rows, cols, nonZero;

	cout << "Enter number of rows, columns and non-zero elements: ";
	cin >> rows >> cols >> nonZero;

	a[0][0] = rows;
	a[0][1] = cols;
	a[0][2] = nonZero;

	cout << "Enter row, column and value of non-zero elements:\n";
	for (int i = 1; i <= nonZero; i++) {
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}

	// Header of transpose
	transpose[0][0] = cols;
	transpose[0][1] = rows;
	transpose[0][2] = nonZero;

	int k = 1;

	// Find elements column-wise
	for (int col = 0; col < cols; col++) {
		for (int i = 1; i <= nonZero; i++) {
			if (a[i][1] == col) {
				transpose[k][0] = a[i][1];
				transpose[k][1] = a[i][0];
				transpose[k][2] = a[i][2];
				k++;
			}
		}
	}

	cout << "\nTranspose of Sparse Matrix:\n";
	cout << "Row\tColumn\tValue\n";

	for (int i = 0; i <= nonZero; i++) {
		cout << transpose[i][0] << "\t"
		     << transpose[i][1] << "\t"
		     << transpose[i][2] << endl;
	}

	return 0;
}