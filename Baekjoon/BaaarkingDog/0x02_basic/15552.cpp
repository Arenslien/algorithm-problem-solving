#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T, A, B;
  cin >> T;

  while (T--) {
    cin >> A >> B;
    cout << A+B << '\n';
  }

  return 0;
}