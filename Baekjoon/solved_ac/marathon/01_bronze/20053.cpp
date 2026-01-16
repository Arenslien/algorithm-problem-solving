// Authored by: Arenslien
// BOJ: 20053 - 최소, 최대 2

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N, min = 1000000, max = -1000000;
    cin >> N;

    for (int i=0; i<N; ++i) {
      int x;
      cin >> x;

      if (x < min) min = x;
      if (x > max) max = x;
    }

    cout << min << ' ' << max << '\n'; 
  }

  return 0;
}