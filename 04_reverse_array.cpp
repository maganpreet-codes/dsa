#include <iostream>
using namespace std;

int main() {
	int a[100], n, i;

	cout << "Enter number of elements: ";
	cin >> n;

	cout << "Enter array elements: \n";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Array in reverse order: \n";
	for (i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}