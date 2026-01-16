#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, i, cnt = 0;
	cin >> N;
	for (i=666; N != cnt; i++) {
	    if (to_string(i).find("666") != string::npos) cnt++;
	}
	
	cout << i-1;
	
	return 0;
}