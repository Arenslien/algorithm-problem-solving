// Authored by: Arenslien
// BOJ: 9288 - More Dice

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  for (int i=0; i<T; ++i) {
    int sum;
    cin >> sum;

    cout << "Case " << (i+1) << ":\n";
    for (int i=1; i<=(sum/2); i++) {
      if (sum-i <= 6) {
        cout << '(' << i << ',' << sum-i << ')' << '\n';
      }
    }
  }

  return 0;
}