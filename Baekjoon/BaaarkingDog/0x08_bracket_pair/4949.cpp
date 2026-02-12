// Authored by: Arenslien
// BOJ: 4949 - 균형잡힌 세상

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    string line;
    getline(cin, line);

    stack<char> st;
    bool is_valid = true;

    for (const char c : line) {
      if (c == '(' || c == '[') st.push(c);
      else if (c == ')') {
        if (st.empty() || st.top() != '(') {
          is_valid = false;
          break;
        }
        st.pop();
      }
      else if (c == ']') {
        if (st.empty() || st.top() != '[') {
          is_valid = false;
          break;
        }
        st.pop();
      }
    }

    if (!st.empty()) is_valid = false;
    cout << (is_valid ? "yes":"no") << '\n'; 
  }
  
  return 0;
}

