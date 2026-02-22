// Authored by: Arenslien
// BOJ: 13136 - Do Not Touch Anything

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long R, C, N;
  cin >> R >> C >> N;

  cout << ((R+N-1)/N) * ((C+N-1)/N);

  return 0;
}