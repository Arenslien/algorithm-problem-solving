// Authored by: Arenslien
// BOJ: 15651 - N과 M (3)

#include <iostream>

using namespace std;

int N, M;
int result[7];

void solve(int k) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=0; i<N; ++i) {
    result[k] = i+1;
    solve(k+1);
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  solve(0);

  return 0;
}