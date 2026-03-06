// Authored by: Arenslien
// BOJ: 1074 - Z

#include <iostream>

using namespace std;

int z(int N, int r, int c) {
  if (N == 0) return 0;
  int half = 1 << (N-1);

  if (r < half && c < half) return z(N-1, r, c);
  else if (r < half && c >= half) return half * half + z(N-1, r, c-half);
  else if (r >= half && c < half) return 2 * half * half + z(N-1, r-half, c);
  else return 3 * half * half + z(N-1, r-half, c-half);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, r, c;
  cin >> N >> r >> c;

  cout << z(N, r, c);

  return 0;
}