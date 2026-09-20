#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Function to interleave the first half with the second half
void interleaveQueue(queue<int> &q) {
	int n = q.size();

	// Check if the queue size is even
	if (n % 2 != 0) {
		cout << "Queue must have an even number of elements to interleave perfectly.\n";
		return;
	}

	int halfSize = n / 2;
	stack<int> s;

	// Step 1: Push the first half of the queue elements into the stack
	for (int i = 0; i < halfSize; i++) {
		s.push(q.front());
		q.pop();
	}

	// Step 2: Enqueue stack elements back into the queue
	// (Queue will now have: [Second Half] followed by [First Half in reversed order])
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}

	// Step 3: Move the first half elements (originally second half) from front to rear
	for (int i = 0; i < halfSize; i++) {
		q.push(q.front());
		q.pop();
	}

	// Step 4: Push the first half elements back into the stack
	for (int i = 0; i < halfSize; i++) {
		s.push(q.front());
		q.pop();
	}

	// Step 5: Interleave the elements of the stack and queue
	while (!s.empty()) {
		q.push(s.top()); // Push element from the first half
		s.pop();

		q.push(q.front()); // Push element from the second half
		q.pop();
	}
}

// Helper function to print elements of a queue
void printQueue(queue<int> q) {
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {
	queue<int> q;

	// Sample Input: 4 7 11 20 5 9
	int arr[] = {4, 7, 11, 20, 5, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++) {
		q.push(arr[i]);
	}

	cout << "Original Queue: ";
	printQueue(q);

	interleaveQueue(q);

	cout << "Interleaved Queue: ";
	printQueue(q);

	return 0;
}