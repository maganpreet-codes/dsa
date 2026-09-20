#include <iostream>
#include <queue>

using namespace std;

class StackOneQueue {
	private:
		queue<int> q;

	public:
		// Push operation: O(N)
		void push(int x) {
			int size = q.size();

			// 1. Push current element
			q.push(x);

			// 2. Pop all previous elements and push them behind the new element
			for (int i = 0; i < size; i++) {
				q.push(q.front());
				q.pop();
			}

			cout << "[PUSH] " << x << " pushed to stack.\n";
		}

		// Pop operation: O(1)
		void pop() {
			if (q.empty()) {
				cout << "[UNDERFLOW] Stack is empty!\n";
				return;
			}
			cout << "[POP] Removed element: " << q.front() << "\n";
			q.pop();
		}

		// Top operation: O(1)
		int top() {
			if (q.empty()) {
				cout << "[INFO] Stack is empty!\n";
				return -1;
			}
			return q.front();
		}

		// Check if empty: O(1)
		bool empty() {
			return q.empty();
		}
};

int main() {
	cout << "=== STACK USING ONE QUEUE ===\n";
	StackOneQueue st;

	st.push(100);
	st.push(200);
	st.push(300);

	cout << "Top element: " << st.top() << "\n"; // 300

	st.pop(); // Removes 300
	cout << "Top element after pop: " << st.top() << "\n"; // 200

	st.pop(); // Removes 200
	st.pop(); // Removes 100
	st.pop(); // Underflow

	return 0;
}