#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;

	int A[n];

	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int count = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((i < j) and A[i] > A[j]) {
				count++;
			}
		}
	}
	cout << "no of inversion= " << count;
	return 0;
}
