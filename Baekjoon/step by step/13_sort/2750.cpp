// Authored by: Arenslien
// BOJ: 2750 - 수 정렬하기

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N; 

  int cnt[2005] = {};

  while (N--) {
    int x;
    cin >> x;
    cnt[x+1000]++;
  }

  for (int i=0; i<=2000; ++i) {
    if (cnt[i] > 0) cout << i-1000 << '\n';
  }

  return 0;
}