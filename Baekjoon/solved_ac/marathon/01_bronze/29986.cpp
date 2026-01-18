// Authored by: Arenslien
// BOJ: 29986 - Amusement Park Adventure

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, H, cnt = 0;
  cin >> N >> H;

  while (N--) {
    int A;
    cin >> A;

    cnt += (H >= A);
  }

  cout << cnt;

  return 0;
}