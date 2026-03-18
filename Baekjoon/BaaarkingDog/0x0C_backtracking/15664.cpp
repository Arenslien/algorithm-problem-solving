// Authored by: Arenslien
// BOJ: 15664 - N과 M (10)

#include <iostream>
using namespace std;

int result[8], cnt[10001], arr[8];
int N, M, num, len = 0;

void solve(int k, int start) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=start; i<len; ++i) {
    if (!cnt[arr[i]]) continue;
    
    result[k] = arr[i];
    cnt[arr[i]]--;
    solve(k+1, i);
    cnt[arr[i]]++;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i=0; i<N; ++i) {
    cin >> num;
    cnt[num]++;
  }

  for (int i=1; i<=10000; ++i) {
    if (cnt[i]) arr[len++] = i;
  }

  solve(0, 0);


  return 0;
}