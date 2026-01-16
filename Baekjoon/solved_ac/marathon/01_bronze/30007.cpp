#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  while (N--) {
    int A, B, X;
    cin >> A >> B >> X;
    cout << A*(X-1) + B << '\n';
  }

  return 0;
}