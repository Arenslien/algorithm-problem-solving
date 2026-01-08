// Authored by: Arenslien
// BOJ: 4101 - 크냐?

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int A, B;
    cin >> A >> B;

    if (!(A+B)) break;

    cout << (A > B ? "Yes":"No") << '\n';
  }

  return 0;
}