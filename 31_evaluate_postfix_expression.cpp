#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
	string postfix;
	stack<int> s;

	cout << "Enter a postfix expression: ";
	cin >> postfix;

	for (char ch : postfix) {

		// If operand, push it onto stack
		if (isdigit(ch)) {
			s.push(ch - '0');
		}

		// If operator, perform operation
		else {
			int b = s.top();
			s.pop();

			int a = s.top();
			s.pop();

			int result;

			switch (ch) {
				case '+':
					result = a + b;
					break;

				case '-':
					result = a - b;
					break;

				case '*':
					result = a * b;
					break;

				case '/':
					result = a / b;
					break;

				case '^':
					result = pow(a, b);
					break;

				default:
					cout << "Invalid operator.";
					return 0;
			}

			s.push(result);
		}
	}

	cout << "Result = " << s.top();

	return 0;
}