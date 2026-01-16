// Authored by : Arenslien
// BOJ : 1085번 - 직사각형에서 탈출

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x, y, w, h;
  cin >> x >> y >> w >> h;

  // (0, 0)과 가까운 지, (w, h)와 가까운지
  cout << min(min(x, w-x), min(y, h-y));

  return 0;
}