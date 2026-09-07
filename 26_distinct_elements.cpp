#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	int A[n];

	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int distinct = 0;

	for (int i = 0; i < n; i++) {
		bool isDistinct = true;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				isDistinct = false;
				break;
			}
		}

		if (isDistinct) {
			distinct++;
		}

	}
	cout << "Total distinct element= " << distinct;
	return 0;
}
