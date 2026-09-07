#include <iostream>
using namespace std;

int main() {
	int n, a[10][10];
	bool upper = true;

	cout << "Enter order of matrix: ";
	cin >> n;

	cout << "Enter Elements of the matrix: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i][j] != 0) {
				upper = false;
			}
		}
	}

	if (upper)
		cout << "Upper Triangular matrix";
	else
		cout << "Not an Upper Triangular matrix";
	return 0;
}
