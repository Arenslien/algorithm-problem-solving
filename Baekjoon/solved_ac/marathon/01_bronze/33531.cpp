// Authored by: Arenslien
// BOJ: 33531 - 2025는 무엇이 특별할까?

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int X;
	cin >> X;
	
	for (int i=X+1; i<=9999; ++i) {
	    int num = (i / 100 + i % 100);
	    
	    if (num * num == i) {
	        cout << i;
	        return 0;
	    }
	}
	
	cout << -1;
	
	return 0;
}
