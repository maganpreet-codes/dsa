#include <iostream>
#include <stack>
using namespace std;

int precedence(char op) {
	if (op == '^')
		return 3;
	if (op == '*' || op == '/')
		return 2;
	if (op == '+' || op == '-')
		return 1;
	return 0;
}

int main() {
	string infix, postfix = "";
	stack<char> s;

	cout << "Enter an infix expression: ";
	cin >> infix;

	for (char ch : infix) {

		// If operand, add it to postfix
		if (isalnum(ch)) {
			postfix += ch;
		}

		// If opening parenthesis
		else if (ch == '(') {
			s.push(ch);
		}

		// If closing parenthesis
		else if (ch == ')') {
			while (!s.empty() && s.top() != '(') {
				postfix += s.top();
				s.pop();
			}
			s.pop(); // Remove '('
		}

		// If operator
		else {
			while (!s.empty() && s.top() != '(' &&
			        precedence(s.top()) >= precedence(ch)) {
				postfix += s.top();
				s.pop();
			}
			s.push(ch);
		}
	}

	// Pop remaining operators
	while (!s.empty()) {
		postfix += s.top();
		s.pop();
	}

	cout << "Postfix expression: " << postfix;

	return 0;
}
