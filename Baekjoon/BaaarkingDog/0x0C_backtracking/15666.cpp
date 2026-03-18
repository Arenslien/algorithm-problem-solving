// Authored by: Arenslien
// BOJ: 15666 - N과 M (12)

#include <iostream>
using namespace std;

bool is_used[10001];
int arr[8], result[8];
int N, M, len = 0;

void solve(int k, int start) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=start; i<len; ++i) {
    result[k] = arr[i];
    solve(k+1, i);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i=0; i<N; ++i) {
    int num; cin >> num;
    is_used[num] = true;
  }

  for (int i=1; i<=10000; ++i) {
    if (is_used[i]) arr[len++] = i;
  }

  solve(0, 0);

  return 0;
}