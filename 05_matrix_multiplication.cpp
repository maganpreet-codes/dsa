#include <iostream>
using namespace std;

int main()


{
	int a[2][2], b[2][2], c[2][2];
	int i, j, k;
	cout << "Enter elements of the first matrix: \n ";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	cout << "Enter elements of second matrix: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> b[i][j];
		}
	}
	//matrix multiplication
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = 0;

			for (k = 0; k < 2; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	cout << "Result of matrix multiplication: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
