// Authored by : Arenslien
// BOJ : 24265번 - 알고리즘 수업 - 알고리즘 수행 시간 4

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, cnt = 0;
  cin >> n;

  for (int i=1; i<=n-1; i++) cnt += n-i;
  cout << cnt << '\n' << 2;

  return 0;
}