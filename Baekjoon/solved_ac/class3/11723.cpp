// Authored by: Arenslien
// BOJ: 11723 - 집합

#include <iostream>
#include <string>
using namespace std;

bool SET[21];
int M;

void add(int x) { 
  SET[x] = 1; 
}
void remove(int x) { 
  SET[x] = 0; 
}
void check(int x) {
  cout << (SET[x] ? 1:0) << '\n'; 
}
void toggle(int x) {
  SET[x] = SET[x] ^ 1; 
}
void all() {
  for (int i=1; i<=20; ++i) SET[i] = 1;
}
void empty() {
  for (int i=1; i<=20; ++i) SET[i] = 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M;
  while (M--) {
    string cmd; cin >> cmd;

    if (cmd == "all") all();
    else if (cmd[0] == 'e') empty();
    else {
      int x; cin >> x;
      
      if (cmd[0] == 'a') add(x);
      else if (cmd[0] == 'r') remove(x);
      else if (cmd[0] == 'c') check(x);
      else toggle(x);
    }
  }

  return 0;
}