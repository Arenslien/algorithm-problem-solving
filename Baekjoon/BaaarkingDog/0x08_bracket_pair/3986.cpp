// Authored by: Arenslien
// BOJ: 3986 - 좋은 단어

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, cnt = 0;
  cin >> N;
  
  while (N--) {
    string s;
    cin >> s;

    stack<char> st;

    for (const char c : s) {
      if (c == 'A') {
        if (!st.empty() && st.top() == 'A') {
          st.pop();
        }
        else st.push(c);
      }
      else {
        if (!st.empty() && st.top() == 'B') {
          st.pop();
        }
        else st.push(c);
      }
    }

    if (st.empty()) cnt++;
  }

  cout << cnt;

  return 0;
}