// Authored by: Arenslien
// BOJ: 31798 - 단원평가

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;

  if (a == 0) {
    cout << c*c - b;
  } else if (b == 0) {
    cout << c*c - a;
  } else {
    cout << sqrt(a + b);
  }

  return 0;
}