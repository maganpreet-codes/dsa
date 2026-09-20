#include <iostream>
#include <queue>

using namespace std;

class StackTwoQueues {
	private:
		queue<int> q1;
		queue<int> q2;

	public:
		// Push operation: O(N)
		void push(int x) {
			// 1. Push new element to q2
			q2.push(x);

			// 2. Move all elements from q1 to q2
			while (!q1.empty()) {
				q2.push(q1.front());
				q1.pop();
			}

			// 3. Swap the names of q1 and q2
			swap(q1, q2);

			cout << "[PUSH] " << x << " pushed to stack.\n";
		}

		// Pop operation: O(1)
		void pop() {
			if (q1.empty()) {
				cout << "[UNDERFLOW] Stack is empty!\n";
				return;
			}
			cout << "[POP] Removed element: " << q1.front() << "\n";
			q1.pop();
		}

		// Top operation: O(1)
		int top() {
			if (q1.empty()) {
				cout << "[INFO] Stack is empty!\n";
				return -1;
			}
			return q1.front();
		}

		// Check if empty: O(1)
		bool empty() {
			return q1.empty();
		}
};

int main() {
	cout << "=== STACK USING TWO QUEUES ===\n";
	StackTwoQueues st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << "Top element: " << st.top() << "\n"; // 30

	st.pop(); // Removes 30
	cout << "Top element after pop: " << st.top() << "\n"; // 20

	st.pop(); // Removes 20
	st.pop(); // Removes 10
	st.pop(); // Underflow

	return 0;
}