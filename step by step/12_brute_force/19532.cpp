// Authored by: Arenslien
// BOJ: 19532 - 수학은 비대면강의입니다

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  for (int i=-999; i<=999; i++) {
    for (int j=-999; j<=999; j++) {
      if (a*i + b*j == c && d*i + e*j == f) {
        cout << i << ' ' << j;
        return 0;
      }
    }
  }

  return 0;
}