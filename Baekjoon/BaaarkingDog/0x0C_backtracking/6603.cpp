// Authored by: Arenslien
// BOJ: 6603 - 로또

#include <iostream>
using namespace std;

int k, num[12], result[6];

void solve(int K, int start) {
  // 1. Base Condition
  if (K == 6) {
    for (int i=0; i<6; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=start; i<k; ++i) {
    result[K] = num[i];
    solve(K+1, i+1);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    cin >> k;
    if (!k) break;

    for (int i=0; i<k; ++i) cin >> num[i];

    solve(0, 0);
    cout << '\n';
  }

  return 0;
}