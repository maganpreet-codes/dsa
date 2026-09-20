#include <iostream>
using namespace std;

#define MAX 5 // Maximum capacity of the queue

class Queue {
	private:
		int items[MAX];
		int front;
		int rear;

	public:
		// Constructor to initialize queue
		Queue() {
			front = -1;
			rear = -1;
		}

		// Function to check if the queue is full
		bool isFull() const {
			return rear == MAX - 1;
		}

		// Function to check if the queue is empty
		bool isEmpty() const {
			return front == -1 || front > rear;
		}

		// Function to add an element to the queue (enqueue)
		void enqueue(int value) {
			if (isFull()) {
				cout << "\n[OVERFLOW] Queue is full! Cannot enqueue " << value << ".\n";
				return;
			}
			if (front == -1) {
				front = 0; // First element being added
			}
			rear++;
			items[rear] = value;
			cout << "\n[SUCCESS] " << value << " enqueued to the queue.\n";
		}

		// Function to remove an element from the queue (dequeue)
		void dequeue() {
			if (isEmpty()) {
				cout << "\n[UNDERFLOW] Queue is empty! Cannot dequeue.\n";
				return;
			}
			cout << "\n[SUCCESS] Dequeued element: " << items[front] << "\n";
			front++;

			// Reset pointers if queue becomes completely empty
			if (front > rear) {
				front = -1;
				rear = -1;
			}
		}

		// Function to view front element without removing it (peek)
		void peek() const {
			if (isEmpty()) {
				cout << "\n[INFO] Queue is empty! No front element.\n";
				return;
			}
			cout << "\n[INFO] Front element: " << items[front] << "\n";
		}

		// Function to display all elements of the queue
		void display() const {
			if (isEmpty()) {
				cout << "\n[INFO] Queue is empty!\n";
				return;
			}
			cout << "\nQueue elements (Front to Rear): ";
			for (int i = front; i <= rear; i++) {
				cout << items[i] << " ";
			}
			cout << "\n";
		}
};

int main() {
	Queue q;
	int choice, value;

	while (true) {
		cout << "\n====== QUEUE OPERATIONS MENU ======\n";
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
				q.enqueue(value);
				break;
			case 2:
				q.dequeue();
				break;
			case 3:
				q.peek();
				break;
			case 4:
				if (q.isEmpty()) {
					cout << "\n[RESULT] Queue is EMPTY.\n";
				} else {
					cout << "\n[RESULT] Queue is NOT empty.\n";
				}
				break;
			case 5:
				if (q.isFull()) {
					cout << "\n[RESULT] Queue is FULL.\n";
				} else {
					cout << "\n[RESULT] Queue is NOT full.\n";
				}
				break;
			case 6:
				q.display();
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