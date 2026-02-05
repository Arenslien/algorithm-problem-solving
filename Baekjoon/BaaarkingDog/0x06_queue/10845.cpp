// Authored by: Arenslien
// BOJ: 10845 - 큐

#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

int size() {
	return tail-head;
}

bool empty() {
	return (size() == 0);
}

void push(int x) {
	dat[tail++] = x;
}

int pop() {
	if (empty()) return -1;

	return dat[head++];
}

int front() {
	if (empty()) return -1;

	return dat[head];
}

int back() {
	if (empty()) return -1;
	
	return dat[tail - 1];
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	while (N--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int x;
			cin >> x;
			push(x);
		}
		else if (cmd[0] == 'f') cout << front() << '\n';
		else if (cmd[0] == 'b') cout << back() << '\n';
		else if (cmd[0] == 's') cout << size() << '\n';
		else if (cmd[0] == 'e') cout << (empty()? 1:0) << '\n';
		else cout << pop() << '\n';
	}

	return 0;
}