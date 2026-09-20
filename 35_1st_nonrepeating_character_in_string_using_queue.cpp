#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

void findFirstNonRepeating(const vector<char> &stream) {
	queue<char> q;
	vector<int> freq(26, 0); // Array to track frequency of lowercase English letters

	cout << "Input Stream:  ";
	for (char c : stream) {
		cout << c << " ";
	}
	cout << "\nOutput Stream: ";

	for (char ch : stream) {
		// 1. Increment frequency of the current character
		freq[ch - 'a']++;

		// 2. Push current character to the queue
		q.push(ch);

		// 3. Remove characters from the front of the queue if they are repeating
		while (!q.empty() && freq[q.front() - 'a'] > 1) {
			q.pop();
		}

		// 4. Print the front element or -1 if queue is empty
		if (!q.empty()) {
			cout << q.front() << " ";
		} else {
			cout << "-1 ";
		}
	}
	cout << endl;
}

int main() {
	// Sample Input: a a b c
	vector<char> stream = {'a', 'a', 'b', 'c'};

	findFirstNonRepeating(stream);

	return 0;
}