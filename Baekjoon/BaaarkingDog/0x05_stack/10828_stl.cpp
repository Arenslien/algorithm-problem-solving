#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  stack<int> st;

  while (N--) {
    string cmd;
    cin >> cmd;

    if (cmd == "push") {
      int x;
      cin >> x;
      st.push(x);
    }
    else if (cmd == "pop") {
      if (st.empty()) cout << -1 << '\n';
      else { cout << st.top() << '\n'; 
        st.pop();
      }
    }
    else if (cmd == "size") cout << st.size() << '\n';
    else if (cmd == "empty") cout << int(st.empty()) << '\n';
    else cout << (st.empty() ? -1:st.top()) << '\n';
  }

  return 0;
}