// Authored by : Arenslien
// BOJ : 9063번 - 대지

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, x1 = -10001, x2 = 10001, y1 = -10001, y2 = 10001;
  cin >> N;

  for (int i=0; i<N; i++) {
    int xi, yi;
    cin >> xi >> yi;
    
    if (x1 < xi) x1 = xi;
    if (xi < x2) x2 = xi;
    if (y1 < yi) y1 = yi;
    if (yi < y2) y2 = yi;
  }

  if (N == 1) { cout << 0; return 0; }

  cout << (x2-x1)*(y2-y1);

  return 0;
}
