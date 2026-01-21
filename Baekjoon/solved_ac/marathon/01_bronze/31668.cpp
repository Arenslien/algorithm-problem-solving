// Authored by: Arenslien
// BOJ: 31668 - 특별한 가지

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, K;
  cin >> N >> M >> K;

  cout << M / N * K;

  return 0;
}