// Authored by: Arenslien
// BOJ: 15663 - N과 M (9)

#include <iostream>
using namespace std;

int cnt[10001], result[8], arr[8];
int N, M, len = 0;

void solve(int k) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=0; i<len; ++i) {
    if (!cnt[arr[i]]) continue;

    result[k] = arr[i];
    cnt[arr[i]]--;
    solve(k+1);
    cnt[arr[i]]++;
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i=0; i<N; ++i) {
    int num; cin >> num;
    cnt[num]++;
  }

  for (int i=1; i<=10000; ++i) {
    if (cnt[i]) arr[len++] = i;
  }
  
  solve(0);

  return 0;
}