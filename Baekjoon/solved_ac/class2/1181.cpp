#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	cin >> N;
	
	vector<string> v;
	for (int i=0; i<N; i++) {
	    string str;
	    cin >> str;
	    v.push_back(str);
	}
	
	sort(v.begin(), v.end(), [](string a, string b) {
	    if (a.size() < b.size()) return true; //left
	    else if (a.size() > b.size()) return false; //right
	    else return (a < b);
	});
	
	v.erase(unique(v.begin(), v.end()), v.end());
	
	for (auto s : v) cout << s << '\n';
	
	return 0;
}