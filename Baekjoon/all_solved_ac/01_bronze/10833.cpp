// Authored by: Arenslien
// BOJ: 10833 - 사과

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, result = 0;
  cin >> N;

  while (N--) {
    int s, a;
    cin >> s >> a;

    result += (a % s);
  }

  cout << result;

  return 0;
}
