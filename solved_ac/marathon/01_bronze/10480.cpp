// Authored by: Arenslien
// BOJ: 10480 - Oddities

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  while (n--) {
    int x;
    cin >> x;
    cout << x << " is " << (x%2 ? "odd":"even") << '\n';
  }

  return 0;
}