// Authored by: Arenslien
// BOJ: 16987 - 계란으로 계란치기

#include <iostream>
#include <utility>
using namespace std;

#define S first
#define W second

pair<int, int> eggs[8];
int N, ans = 0;
int damaged[8];

void solve(int k) {
  // 1. Base Condition
  if (k == N) {
    int cnt = 0;
    for (int i=0; i<N; ++i) {
      if (eggs[i].S <= damaged[i]) cnt++;
    }
    if (ans < cnt) ans = cnt;
    return;
  }

  // 2. Backtracking
  int good_egg = 0;
  for (int i=0; i<N; ++i) {
    if (i == k) continue;
    if (eggs[i].S > damaged[i]) good_egg++;
  }
  if (eggs[k].S <= damaged[k] || !good_egg) solve(k+1);
  else {
    for (int i=0; i<N; ++i) {
      if (k == i || eggs[i].S <= damaged[i]) continue;
        damaged[k] += eggs[i].W;
        damaged[i] += eggs[k].W;
        solve(k+1);
        damaged[k] -= eggs[i].W;
        damaged[i] -= eggs[k].W;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  for (int i=0; i<N; ++i) cin >> eggs[i].S >> eggs[i].W;

  solve(0);

  cout << ans;

  return 0;
}