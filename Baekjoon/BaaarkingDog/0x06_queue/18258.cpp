// Authored by: Arenslien
// BOJ: 18258 - 큐 2

#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<int> Q;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  string cmd;
  while (N--) {
    cin >> cmd;

    if (cmd == "push") {
      int x;
      cin >> x;

      Q.push(x);
    }
    else if (cmd[0] == 's') {
      cout << Q.size() << '\n';
    }
    else if (cmd[0] == 'e') {
      cout << (Q.empty() ? 1:0) << '\n';
    }
    else if (cmd[0] == 'f') {
      cout << (Q.empty() ? -1:Q.front()) << '\n';
    }
    else if (cmd[0] == 'b') {
      cout << (Q.empty() ? -1:Q.back()) << '\n';
    }
    else {
      if (Q.empty()) cout << -1 << '\n';
      else {
        cout << Q.front() << '\n';
        Q.pop();
      }
    }
  }

  return 0;
}