// Authored by: Arenslien
// BOJ: 31789 - 모험의 시작

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, X, S;
  cin >> N >> X >> S;


  int max = 0;
  while (N--) {
    int c, p;
    cin >> c >> p;

    if (X >= c && max < p) max = p;
  }

  cout << (max > S ? "YES" : "NO");

  return 0;
}
