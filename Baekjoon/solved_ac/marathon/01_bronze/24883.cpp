#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  char c;
  cin >> c;

  if (c == 'N' || c == 'n') cout << "Naver D2";
  else cout << "Naver Whale";

  return 0;
}