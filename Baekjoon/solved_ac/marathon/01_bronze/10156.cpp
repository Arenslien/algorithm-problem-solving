// Authored by: Arenslien
// BOJ: 10156 - 과자

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int K, N, M;
  cin >> K >> N >> M;

  cout << max((K*N-M), 0);

  return 0;
}