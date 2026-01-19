// Authored by: Arenslien
// BOJ: 1703 - 생장점

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  while (true) {
    int a, cnt = 1;
    cin >> a;
    if (a == 0) break;

    for (int i=0; i<a; i++) {
      int split, remove;
      cin >> split >> remove;
      cnt = cnt*split - remove;
    }

    cout << cnt << '\n';
  }

  return 0;
}