#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, B, C, num;
  int cnt[10] = {};

  cin >> A >> B >> C;
  for (char digit : to_string(A*B*C)) cnt[digit-'0']++;
  
  for (int digit : cnt) cout << digit << '\n';

  return 0;
}
