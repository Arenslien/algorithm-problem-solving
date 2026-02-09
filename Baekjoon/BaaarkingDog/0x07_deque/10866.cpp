// Authored by: Arenslien
// BOJ: 10866 - 덱

#include <iostream>
#include <string>

using namespace std;

const int MX = 1000005;
int dat[2*MX + 1];
int head = MX, tail = MX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  while (N--) {
    string cmd;
    cin >> cmd;
    
    if (cmd[0] == 's') {
      cout << tail - head << '\n';
    }
    else if (cmd[0] == 'e') {
      cout << (tail - head ? 0:1) << '\n';
    }
    else if (cmd[0] == 'f') {
      cout << (tail - head ? dat[head]:-1) << '\n';
    }
    else if (cmd[0] == 'b') {
      cout << (tail - head ? dat[tail - 1]:-1) << '\n';
    }
    else if (cmd == "pop_front") {
      cout << (tail - head ? dat[head++]:-1) << '\n';
    }
    else if (cmd == "pop_back") {
      cout << (tail - head ? dat[--tail]:-1) << '\n';
    }
    else {
      int x;
      cin >> x;

      if (cmd == "push_front") {
        dat[--head] = x;
      }
      else {
        dat[tail++] = x;
      }
    }

  }


  return 0;
}