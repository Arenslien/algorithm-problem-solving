// 5397: 키로거

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    string input_log;
    cin >> input_log;

    stack<char> st_left;
    stack<char> st_right;
    
    for (char key : input_log) {
      if (key == '<') {
        if (st_left.size() > 0) {
          st_right.push(st_left.top());
          st_left.pop();
        }
      } else if (key == '>') {
        if (st_right.size() > 0) {
          st_left.push(st_right.top());
          st_right.pop();
        }
      } else if (key == '-') {
        if (!st_left.empty()) st_left.pop();
      } else {
        st_left.push(key);
      }
    }

    while (st_left.size()) { 
      st_right.push(st_left.top());
      st_left.pop();
    }

    while (!st_right.empty()) {
      cout << st_right.top();
      st_right.pop();
    }

    cout << '\n';
  }


  return 0;
}