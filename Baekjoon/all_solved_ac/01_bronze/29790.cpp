// Authored by: Arensline
// BOJ: 29790 - 임스의 메이플컵

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, U, L;
  cin >> N >> U >> L;

  if (N >= 1000 && (U >= 8000 || L >= 260)) cout << "Very Good";
  else if (N >= 1000) cout << "Good";
  else cout << "Bad";

  return 0;
}