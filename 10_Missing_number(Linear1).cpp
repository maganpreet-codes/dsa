#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "enter n:";
	cin >> n;

	int a[n - 1];

	cout << "Enter " << n - 1 << " Elements :";
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}

	int expectedSum = n * (n + 1) / 2;

	int actualSum = 0;
	for (int i = 0; i < n - 1; i++) {
		actualSum = actualSum + a[i];
	}

	int missing = expectedSum - actualSum;

	cout << "missing number =" << missing;

	return 0;
}
