#include <iostream>
using namespace std;

int main() {
	int a[2][2], b[2][2];
	int i, j;

	cout << "Enter elements of the matrix: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	//Find transpose
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			b[i][j] = a[j][i];
		}
	}
	cout << "Transpose of matrix: \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
