// Authored by: Arenslien
// BOJ: 34921 - 덕후

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, T;
  cin >> A >> T;

  cout << max(0, 10 + 2*(25-A+T));

  return 0;
}