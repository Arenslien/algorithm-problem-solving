// Authored by : Arenslien
// BOJ : 24313번 - 알고리즘 수업 - 점근적 표기 1

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a1, a0, c, n0;
  cin >> a1 >> a0 >> c >> n0;
  
  cout << ((a1*n0+a0 <= c*n0 && a1 <= c) ? 1:0);

  return 0;
}