#include <iostream>
#include <stack>
using namespace std;

int main() {
	string expression;
	stack<char> s;

	cout << "Enter an expression: ";
	getline(cin, expression);

	for (char ch : expression) {
		if (ch == '(' || ch == '{' || ch == '[') {
			s.push(ch);
		} else if (ch == ')' || ch == '}' || ch == ']') {
			if (s.empty()) {
				cout << "Parentheses are not balanced.";
				return 0;
			}

			char top = s.top();
			s.pop();

			if ((ch == ')' && top != '(') ||
			        (ch == '}' && top != '{') ||
			        (ch == ']' && top != '[')) {
				cout << "Parentheses are not balanced.";
				return 0;
			}
		}
	}

	if (s.empty())
		cout << "Parentheses are balanced.";
	else
		cout << "Parentheses are not balanced.";

	return 0;
}