// Authored by: Arenslien
// BOJ: 2587 - 대표값2

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int x[5] = {}, sum = 0;
  for (int i=0; i<5; ++i) {
    cin >> x[i];
    sum += x[i];
  }

  sort(x, x+5);

  cout << sum/5 << '\n' << x[2];

  return 0;
}