#include <iostream>
using namespace std;

int main() {
	int a[20][3], b[20][3], c[40][3];
	int result[10][10] = {0};
	int n1, n2;

	// Input first matrix
	cout << "Enter number of rows, columns and non-zero elements of A: ";
	cin >> a[0][0] >> a[0][1] >> a[0][2];

	n1 = a[0][2];

	cout << "Enter row, column and value of A:\n";
	for (int i = 1; i <= n1; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2];

	// Input second matrix
	cout << "Enter number of rows, columns and non-zero elements of B: ";
	cin >> b[0][0] >> b[0][1] >> b[0][2];

	n2 = b[0][2];

	cout << "Enter row, column and value of B:\n";
	for (int i = 1; i <= n2; i++)
		cin >> b[i][0] >> b[i][1] >> b[i][2];

	// Check multiplication condition
	if (a[0][1] != b[0][0]) {
		cout << "Multiplication not possible!";
		return 0;
	}

	// Multiplication
	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= n2; j++) {
			if (a[i][1] == b[j][0]) {
				result[a[i][0]][b[j][1]] +=
				    a[i][2] * b[j][2];
			}
		}
	}

	// Convert result to triplet form
	c[0][0] = a[0][0];
	c[0][1] = b[0][1];

	int k = 1;

	for (int i = 0; i < a[0][0]; i++) {
		for (int j = 0; j < b[0][1]; j++) {
			if (result[i][j] != 0) {
				c[k][0] = i;
				c[k][1] = j;
				c[k][2] = result[i][j];
				k++;
			}
		}
	}

	c[0][2] = k - 1;

	// Display result
	cout << "\nMultiplication of A and B:\n";
	cout << "Row\tColumn\tValue\n";

	for (int i = 0; i <= c[0][2]; i++)
		cout << c[i][0] << "\t"
		     << c[i][1] << "\t"
		     << c[i][2] << endl;

	return 0;
}