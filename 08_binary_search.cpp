#include <iostream>
using namespace std;

int main() {
	int a[] = {10, 20, 30, 40, 50, 60, 70};
	int n = 7;
	int target;

	cout << "Enter element to search: ";
	cin >> target;

	int beg = 0;
	int end = n - 1;
	bool found = false;

	while (beg <= end) {
		int mid = (beg + end) / 2;

		if (a[mid] == target) {
			cout << "Element found at index: " << mid;
			found = true;
			break;
		} else if (a[mid] < target) {
			beg = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	if (!found) {
		cout << "Element not found";
	}
	return 0;
}