// Authored by: Arenslien
// BOJ: 30868 - 개표

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    for (int i=0; i<n/5; ++i) cout << "++++" << ' ';
    for (int i=0; i<n%5; ++i) cout << '|';
    cout << '\n';
  }

  return 0;
}