// Authored by: Arenslien
// BOJ: 30917 - A+B - 10 (제 1 편)

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