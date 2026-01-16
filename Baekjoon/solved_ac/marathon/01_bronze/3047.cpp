#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num[3] = {};
  string ABC;
  
  cin >> num[0] >> num[1] >> num[2] >> ABC;

  sort(num, num+3);

  for (char alphabet : ABC) cout << num[alphabet - 'A'] << ' ';

  return 0;
}