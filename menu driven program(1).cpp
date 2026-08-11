#include <iostream>
using namespace std;

int main() {
	int a[100], n = 0;
	int choice, pos, value, key;
	int i, found;

	do {
		cout << "\n-------MENU-------\n";
		cout << "1.CREATE\n";
		cout << "2.DISPLAY\n";
		cout << "3.INSERT\n";
		cout << "4.DELETE\n";
		cout << "5.LINEAR SEARCH\n";
		cout << "6.EXIT\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Enter the number of elements: ";
				cin >> n;

				cout << "Enter elements :" ;
				for (i = 0; i < n; i++) {
					cin >> a[i];
				}
				cout << "Array created successfully.\n";
				break;
			case 2:
				cout << "Array elements are: \n";
				for (i = 0; i < n; i++) {
					cout << a[i] << " ";
				}
				cout << endl;
				break;
			case 3:
				cout << "Enter position(0to" << n << "):";
				cin >> pos;

				cout << "Enter value: ";
				cin >> value;

				for (i = n; i > pos; i--) {
					a[i] = a[i - 1];
				}
				a[pos] = value;
				n++;

				cout << "Element inserted succesfully.\n";
				break;
			case 4:
				cout << "Enter position to delete (0 to " << n - 1 << "):";
				cin >> pos;
				for (i = pos; i < n - 1; i++) {
					a[i] = a[i + 1];
				}
				n--;

				cout << "Element deleted succesfully.\n";
				break;
			case 5:
				cout << "Enter element to search: ";
				cin >> key;
				found = 0;
				for (i = 0; i < n; i++) {
					if (a[i] == key) {
						cout << "Element found at position: " << i << endl;
						found = 1;
						break;
					}
				}
				if (found == 0) {
					cout << "Element not found.\n";
				}
				break;
			case 6:
				cout << "Exiting program...\n";
				break;

			default:
				cout << "Invalid choice.\n";
		}
	} while (choice != 6);
	return 0;
}