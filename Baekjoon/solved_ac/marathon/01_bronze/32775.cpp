#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int S, F;
	cin >> S >> F;
	
	cout << (S<=F ? "high speed rail":"flight");
	
	return 0;
}