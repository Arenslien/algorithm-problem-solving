// Authored by: Arenslien
// BOJ: 14652 - 나는 행복합니다~

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, K;
  cin >> N >> M >> K;

  cout << K / M << ' ' << K % M << '\n';

  return 0;
}