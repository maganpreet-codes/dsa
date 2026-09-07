#include <iostream>
using namespace std;

int main() {
	int n, a[10][10];
	bool lower = true;

	cout << "Enter the order of the matrix: ";
	cin >> n;

	cout << "Enter the elements of the matrix: ";
	for (int i; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i][j] != 0) {
				lower = false;
			}
		}
	}
	if (lower)
		cout << "Lower Triangular Matrix";
	else
		cout << "Upper Triangular Matrix";
	return 0;
}