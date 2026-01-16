// Authored by : Arenslien
// BOJ : 3009번 - 네 번째 점

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 직사각형 특징, x위치 2개, y위치 2개
  int x = 0, y = 0;
  for (int i=0; i<3; i++) {
    int xi, yi;
    cin >> xi >> yi;
    
    x ^= xi;
    y ^= yi;
  }

  cout << x << ' ' << y;

  return 0;
}