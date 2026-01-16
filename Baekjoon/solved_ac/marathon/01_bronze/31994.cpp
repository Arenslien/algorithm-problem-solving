// Authored by : Arenslien
// BOJ : 31994번 - 강당 대관

#include <iostream>
#include <string>

using namespace std;

struct lecture {
  string name;
  int cnt;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int max = 0;
  string name;

  for (int i=0; i<7; i++) {
    struct lecture l;  
    cin >> l.name >> l.cnt;

    if (l.cnt > max) {
      max = l.cnt;
      name = l.name;
    }
  }

  cout << name;

  return 0;
}