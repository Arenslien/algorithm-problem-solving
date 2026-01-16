#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int a, b, c;
	cin >> a >> b >> c;
	
	cout << (a+b+c) - min({a, b, c}) - max({a, b, c});
	
	return 0;
}