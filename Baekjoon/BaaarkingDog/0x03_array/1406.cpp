// 1406: 에디터

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string string1;
  stack<char> st_left;
  stack<char> st_right;
  int M;
  cin >> string1 >> M;

  for (char c : string1) st_left.push(c);

  while (M--) {
    char cmd;
    
    cin >> cmd;
    if (cmd == 'P') {
      char key;
      cin >> key;
      st_left.push(key);
    } else if (cmd == 'L' && st_left.size() > 0) {
      st_right.push(st_left.top());
      st_left.pop();
    } else if (cmd == 'D' && st_right.size() > 0) {
      st_left.push(st_right.top());
      st_right.pop();
    } else if (cmd == 'B' && st_left.size() > 0) {
      st_left.pop();
    }
  }

  while (!st_left.empty()) {
    st_right.push(st_left.top());
    st_left.pop();
  }

  while (!st_right.empty()) {
    cout << st_right.top();
    st_right.pop();
  }

  return 0;
}