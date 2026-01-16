#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    string str;
    cin >> str;

    list<char> L;
    list<char>::iterator cursor = L.end();

    for (char c : str) {
      if (c == '-') {
        if (cursor != L.begin()) cursor = L.erase(--cursor);
      }
      else if (c == '<') {
        if (cursor != L.begin()) cursor--;
      }
      else if (c == '>') {
        if (cursor != L.end()) cursor++;
      }
      else {
        L.insert(cursor, c);
      }
    }
    
    for (auto l : L) cout << l;
    cout << '\n';
  }

  return 0;
}