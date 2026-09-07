#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;

	cout << "Enter the first string: ";
	cin >> str1;

	cout << "Enter the second string: ";
	cin >> str2;

	str1 = str1 + str2;

	cout << " concatenated string = " << str1;

	return 0;

}
