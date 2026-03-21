// Authored by: Arenslien
// BOJ: 1003 - 피보나치 함수

#include <iostream>
using namespace std;

int zero_cnt[41];
int one_cnt[41];
int T;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  zero_cnt[0] = 1; one_cnt[0] = 0;
  zero_cnt[1] = 0; one_cnt[1] = 1;
  for (int i=2; i<=40; ++i) {
    zero_cnt[i] = zero_cnt[i-2] + zero_cnt[i-1];
    one_cnt[i] = one_cnt[i-2] + one_cnt[i-1];
  }

  cin >> T;
  while (T--) {
    int n; cin >> n;
    cout << zero_cnt[n] << ' ' << one_cnt[n] << '\n'; 
  }

  return 0;
}