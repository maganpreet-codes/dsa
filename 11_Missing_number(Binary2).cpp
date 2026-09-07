#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;

	int a[n - 1];
	cout << "Enter " << n - 1 << " Sorted elements :";
	for (int i = 0; i < n - 1 ; i++) {
		cin >> a[i];
	}
	int low = 0, high = n - 2;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (a[mid] == mid + 1) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << "Missing number = " << low + 1;

	return 0;
}