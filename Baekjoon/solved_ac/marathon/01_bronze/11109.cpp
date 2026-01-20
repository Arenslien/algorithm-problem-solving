// Authored by: Arenslien
// BOJ: 11109 - 괴짜 교수

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int d, n, s, p;
    cin >> d >> n >> s >> p;

    if (d + n * p > s * n) {
      cout << "do not parallelize\n";
    } else if (d + n * p < s * n) {
      cout << "parallelize\n";
    } else {
      cout << "does not matter\n";
    }

  }

  return 0;
}