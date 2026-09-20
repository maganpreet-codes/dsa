#include <iostream>
using namespace std;

#define MAX 5 // Maximum capacity of the circular queue

class CircularQueue {
	private:
		int items[MAX];
		int front;
		int rear;

	public:
		// Constructor to initialize the circular queue
		CircularQueue() {
			front = -1;
			rear = -1;
		}

		// Function to check if the circular queue is full
		bool isFull() const {
			return (rear + 1) % MAX == front;
		}

		// Function to check if the circular queue is empty
		bool isEmpty() const {
			return front == -1;
		}

		// Function to insert an element into the circular queue (enqueue)
		void enqueue(int value) {
			if (isFull()) {
				cout << "\n[OVERFLOW] Circular Queue is full! Cannot enqueue " << value << ".\n";
				return;
			}

			// First element condition
			if (isEmpty()) {
				front = 0;
				rear = 0;
			} else {
				// Circular increment of rear pointer
				rear = (rear + 1) % MAX;
			}

			items[rear] = value;
			cout << "\n[SUCCESS] " << value << " enqueued to the circular queue.\n";
		}

		// Function to remove an element from the circular queue (dequeue)
		void dequeue() {
			if (isEmpty()) {
				cout << "\n[UNDERFLOW] Circular Queue is empty! Cannot dequeue.\n";
				return;
			}

			cout << "\n[SUCCESS] Dequeued element: " << items[front] << "\n";

			// Reset queue pointers if only one element was left
			if (front == rear) {
				front = -1;
				rear = -1;
			} else {
				// Circular increment of front pointer
				front = (front + 1) % MAX;
			}
		}

		// Function to view the front element without removing it (peek)
		void peek() const {
			if (isEmpty()) {
				cout << "\n[INFO] Circular Queue is empty! No front element.\n";
				return;
			}
			cout << "\n[INFO] Front element: " << items[front] << "\n";
		}

		// Function to display all elements of the circular queue
		void display() const {
			if (isEmpty()) {
				cout << "\n[INFO] Circular Queue is empty!\n";
				return;
			}

			cout << "\nCircular Queue elements: ";
			int i = front;
			while (true) {
				cout << items[i] << " ";
				if (i == rear) {
					break;
				}
				i = (i + 1) % MAX; // Move circular pointer
			}
			cout << "\n";
		}
};

int main() {
	CircularQueue cq;
	int choice, value;

	while (true) {
		cout << "\n====== CIRCULAR QUEUE OPERATIONS MENU ======\n";
		cout << "1. Enqueue (Insert)\n";
		cout << "2. Dequeue (Delete)\n";
		cout << "3. Peek (Front Element)\n";
		cout << "4. Check if Empty (isEmpty)\n";
		cout << "5. Check if Full (isFull)\n";
		cout << "6. Display Queue\n";
		cout << "7. Exit\n";
		cout << "Enter your choice (1-7): ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Enter integer value to enqueue: ";
				cin >> value;
				cq.enqueue(value);
				break;
			case 2:
				cq.dequeue();
				break;
			case 3:
				cq.peek();
				break;
			case 4:
				if (cq.isEmpty()) {
					cout << "\n[RESULT] Circular Queue is EMPTY.\n";
				} else {
					cout << "\n[RESULT] Circular Queue is NOT empty.\n";
				}
				break;
			case 5:
				if (cq.isFull()) {
					cout << "\n[RESULT] Circular Queue is FULL.\n";
				} else {
					cout << "\n[RESULT] Circular Queue is NOT full.\n";
				}
				break;
			case 6:
				cq.display();
				break;
			case 7:
				cout << "\nExiting program...\n";
				return 0;
			default:
				cout << "\nInvalid choice! Please enter a number between 1 and 7.\n";
		}
	}

	return 0;
}