// Authored by : Arenslien
// BOJ : 26489번 - Gum Gum for Jay Jay

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cnt = 0;
  string line;

  // EOF(End Of File), 입력 종료
  while (getline(cin, line)) cnt++;

  cout << cnt;

  return 0;
}