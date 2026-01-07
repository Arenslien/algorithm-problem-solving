// Authored by: Arenslien
// BOJ: 23825 - SASA 모형을 만들어보자

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M;
  cin >> N >> M;

  cout << min(N/2, M/2);

  return 0;
}