// Authored by: Arenslien
// BOJ: 10799 - 쇠막대기

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string line;
  cin >> line;

  int stick = 0, sum = 0;
  stack<char> st;

  for (const char c : line) {
    if (c == '(') { // 열린 소괄호
      if (!st.empty() && st.top() == '(') stick++;
      st.push(c);
    }
    else { // 닫힌 소괄호
      if (st.top() == '(') sum += stick;
      else { sum++; stick--; }
      st.push(c);
    }
  }

  cout << sum;

  return 0;
}