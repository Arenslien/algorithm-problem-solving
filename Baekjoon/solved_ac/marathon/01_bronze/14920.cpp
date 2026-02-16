// Authored by: Arenslien
// BOJ: 14920 - 3n+1 수열

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num, i;
  cin >> num;

  for (i=1; num != 1; i++) {
    if (num & 1) { // 홀수인 경우
      num = (3 * num) + 1;
    }
    else {
      num /= 2;
    }
  }

  cout << i;

  return 0;
}