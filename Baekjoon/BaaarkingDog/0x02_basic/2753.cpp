#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int year;
  cin >> year;

  // 윤년 체크
  if ((year%4 == 0 && year%100) || year%400 == 0) cout << 1;
  else cout << 0;

  return 0;
}