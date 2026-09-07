#include <iostream>
using namespace std;

int main() {
	int a[20][3], b[20][3], c[40][3];
	int n1, n2, i = 1, j = 1, k = 1;

	// Input first matrix
	cout << "Enter number of rows, columns and non-zero elements of A: ";
	cin >> a[0][0] >> a[0][1] >> a[0][2];

	n1 = a[0][2];

	cout << "Enter row, column and value of A:\n";
	for (i = 1; i <= n1; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2];

	// Input second matrix
	cout << "Enter number of rows, columns and non-zero elements of B: ";
	cin >> b[0][0] >> b[0][1] >> b[0][2];

	n2 = b[0][2];

	cout << "Enter row, column and value of B:\n";
	for (i = 1; i <= n2; i++)
		cin >> b[i][0] >> b[i][1] >> b[i][2];

	// Check dimensions
	if (a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
		cout << "Addition not possible!";
		return 0;
	}

	c[0][0] = a[0][0];
	c[0][1] = a[0][1];

	i = 1;
	j = 1;

	// Addition
	while (i <= n1 && j <= n2) {
		if (a[i][0] == b[j][0] && a[i][1] == b[j][1]) {
			int sum = a[i][2] + b[j][2];

			if (sum != 0) {
				c[k][0] = a[i][0];
				c[k][1] = a[i][1];
				c[k][2] = sum;
				k++;
			}

			i++;
			j++;
		} else if (a[i][0] < b[j][0] ||
		           (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
			c[k][0] = a[i][0];
			c[k][1] = a[i][1];
			c[k][2] = a[i][2];

			i++;
			k++;
		} else {
			c[k][0] = b[j][0];
			c[k][1] = b[j][1];
			c[k][2] = b[j][2];

			j++;
			k++;
		}
	}

	while (i <= n1) {
		c[k][0] = a[i][0];
		c[k][1] = a[i][1];
		c[k][2] = a[i][2];
		i++;
		k++;
	}

	while (j <= n2) {
		c[k][0] = b[j][0];
		c[k][1] = b[j][1];
		c[k][2] = b[j][2];
		j++;
		k++;
	}

	c[0][2] = k - 1;

	// Display result
	cout << "\nAddition of A and B:\n";
	cout << "Row\tColumn\tValue\n";

	for (i = 0; i <= c[0][2]; i++)
		cout << c[i][0] << "\t"
		     << c[i][1] << "\t"
		     << c[i][2] << endl;

	return 0;
}