// Authored by: Arenslien
// BOJ: 15652 - N과 M (4)

#include <iostream>

using namespace std;

int N, M;
int result[8];

void solve(int k, int start) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=start; i<N; ++i) {
    result[k] = i+1;
    solve(k+1, i);
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  solve(0, 0);

  return 0;
}