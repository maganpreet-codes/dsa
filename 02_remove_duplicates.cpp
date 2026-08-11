//designing the logic to remove the duplicat elements from an array and
//after the deletion the array should contain the unique elements
#include <iostream>
using namespace std;

int main() {
	int a[100], n;
	int i, j, k;

	cout << "Enter number of elements: ";
	cin >> n;

	cout << "Enter array elements: \n";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	//remove duplicate elements
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				//shift elements to the left
				for (k = j; k < n - 1; k++) {
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
	cout << "Array after removing duplicates:\n";
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}