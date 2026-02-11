// Authored by: Arenslien
// BOJ: 4949 - 균형잡힌 세상

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    // 1. 문자열 입력
    string line;
    getline(cin, line);

    // 2. 종료 조건
    if (line == ".") break;

    stack<char> ST;

    // 3. 스택 괄호쌍 체크: '(', ')', '[', ']'
    for (const char c : line) {
      if (c == '(' || c == '[') ST.push(c);
      else if (c == ')') {
        if (ST.empty() || ST.top() != '(') {
          ST.push(c);
          break;
        }
        ST.pop();
      }
      else if (c == ']') {
        if (ST.empty() || ST.top() != '[') {
          ST.push(c);
          break;
        }
        ST.pop();
      }
    }

    cout << (ST.empty() ? "yes":"no") << '\n';
  }

  return 0;
}