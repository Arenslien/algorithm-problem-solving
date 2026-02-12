// Authored by: Arenslien
// BOJ: 2504 - 괄호의 값

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string line;
  cin >> line;

  int ans = 0, temp = 1;
  stack<char> st;

  for (int i=0; i<line.size(); ++i) {
    if (line[i] == '(') {
      temp *= 2;
      st.push(line[i]);
    }
    else if (line[i] == '[') {
      temp *= 3;
      st.push(line[i]);
    }
    else if (line[i] == ')') {
      if (st.empty() || st.top() != '(') {
        ans = 0;
        break;
      }
      
      if (line[i-1] == '(') ans += temp;
      
      st.pop();
      temp /= 2;
    }
    else if (line[i] == ']') {
      if (st.empty() || st.top() != '[') {
        ans = 0;
        break;
      }
      
      if (line[i-1] == '[') ans += temp;
      
      st.pop();
      temp /= 3;
    }
  }

  cout << (st.empty() ? ans:0);

  return 0;
}