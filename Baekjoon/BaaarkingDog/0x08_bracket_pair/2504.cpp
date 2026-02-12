// Authored by: Arenslien
// BOJ: 2504 - 괄호의 값

#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct element {
  int i_val = 0;
  char c_val = '\0';
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string line;
  cin >> line;

  stack<element> st;
  bool is_valid = true;
  int result = 0;

  for (const char c : line) {
    if (c == '(' || c == '[') st.push({0, c}); // 여는 괄호 push
    
    else if (c == ')') { // 닫는 소괄호
      if (st.empty()) { // 비어있는 경우
        is_valid = false;
        break;
      }
      if (st.top().c_val == '(') { // 여는 소괄호 ()
        st.pop();

        if (!st.empty() && st.top().i_val != 0) {
          int top = st.top().i_val;
          st.pop();
          st.push({top + 2, '\0'});
        }
        else st.push({2, '\0'});
      } 
      else if (st.top().i_val != 0) { // 숫자인 경우
        int temp = st.top().i_val;
        st.pop();

        if (!st.empty() && st.top().c_val == '(') { // (X)의 경우
          st.pop();

          if (!st.empty() && st.top().i_val != 0) { // top + temp * 2;
            int top = st.top().i_val;
            st.pop();
            st.push({top + temp * 2, '\0'});
          } 
          else st.push({temp * 2, '\0'});
        }
      }
      else {
        is_valid = false;
        break;
      }
    }

    else if (c == ']') { // 닫는 대괄호
      if (st.empty()) { // 비어있는 경우
        is_valid = false;
        break;
      }
      if (st.top().c_val == '[') { // 여는 소괄호 ()
        st.pop();

        if (!st.empty() && st.top().i_val != 0) {
          int top = st.top().i_val;
          st.pop();
          st.push({top + 3, '\0'});
        }
        else st.push({3, '\0'});
      } 
      else if (st.top().i_val != 0) { // 숫자인 경우
        int temp = st.top().i_val;
        st.pop();

        if (!st.empty() && st.top().c_val == '[') { // (X)의 경우
          st.pop();

          if (!st.empty() && st.top().i_val != 0) { // top + temp * 2;
            int top = st.top().i_val;
            st.pop();
            st.push({top + temp * 3, '\0'});
          } 
          else st.push({temp * 3, '\0'});
        }
      }
      else {
        is_valid = false;
        break;
      }
    }
  }

  if (!st.empty() && st.top().i_val != 0) result = st.top().i_val;
  cout << (is_valid ? result:0);

  return 0;
}