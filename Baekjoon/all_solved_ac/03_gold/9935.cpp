// Authored by: Arenslien
// BOJ: 9935 - 문자열 폭발

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, bomb;
  cin >> s >> bomb;

  stack<char> st;
  char end = bomb[bomb.size() - 1];

  for (const char c : s) {
    st.push(c);
    
    if (c == end) {
      string temp = "";
      bool is_valid = true;

      for (int i=0; i<bomb.size(); ++i) { // 0 1 2 3
        if (st.empty() || st.top() != bomb[bomb.size()-1 - i]) { 
          is_valid = false;
          break;
        }
        temp += st.top();
        st.pop();
      }

      if (!is_valid) {
        for (int i=temp.size()-1; i>=0; --i) st.push(temp[i]);
      }
    }

  }

  if (st.empty()) cout << "FRULA";
  else {
    string result = "";
    
    while (!st.empty()) {
      result += st.top();
      st.pop();
    }

    for (int i=result.size()-1; i>=0; --i) cout << result[i];
  }

  return 0;
}