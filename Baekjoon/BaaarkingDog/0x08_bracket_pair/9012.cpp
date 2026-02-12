// Authored by: Arenslien
// BOJ: 9012 - 괄호

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    string s;
    cin >> s;

    stack<char> st;

    for (const char c : s) {
      if (c == '(') st.push(c);
      else {
        if (!st.empty() && st.top() == '(') {
          st.pop();
        }
        else st.push(c);
      }
    }

    cout << (st.empty() ? "YES":"NO") << '\n';
  }

  return 0;
}