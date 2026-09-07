#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;

	cout << "Enter a string: ";
	cin >> str;

	cout << "String after deleting the vowels = ";

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o'
		        && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O'
		        && str[i] != 'U' ) {
			cout << str[i];
		}
	}
	return 0;
}