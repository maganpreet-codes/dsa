#include <iostream>
using namespace std;

int main() {
	int a[100], original[100], n, k;
	int i, j, temp;

	cout << "Enter number of elements : ";
	cin >> n;
	cout << "Enter array elements: \n ";
	for (i = 0; i < n; i++) {
		cin >> a[i];
		original[i] = a[i];
	}
	cout << "Enter k:";
	cin >> k;
	//left rotation
	for (j = 0; j < k; j++) {
		temp = a[0];
		for (i = 0; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		a[n - 1] = temp;
	}
	cout << "Array after left rotation:\n";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	//restore original array
	for (i = 0; i < n; i++) {
		a[i] = original[i];
	}
	//right rotation
	for (j = 0; j < k; j++) {
		temp = a[n - 1];
		for (i = n - 1; i > 0; i--) {
			a[i] = a[i - 1];
		}
		a[0] = temp;
	}
	cout << "Array after the right rotation:\n";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}