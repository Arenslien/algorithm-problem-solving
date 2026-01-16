#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int i = 0;
  while (true) {
    string s;
    getline(cin, s);
    
    if (s == "0") break;
    
    cout << "Case " << ++i << ": Sorting... done!\n";
  }

  return 0;
}