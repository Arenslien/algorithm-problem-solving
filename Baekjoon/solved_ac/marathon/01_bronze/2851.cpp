// Authored by: Arenslien
// BOJ: 2851 - 슈퍼 마리오

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int sum = 0, mushroom[10] = {};

  for (int i=0; i<10; ++i) cin >> mushroom[i];
    
  for (int i=0; i<10; ++i) {
    if (abs(100 - (sum + mushroom[i])) <= abs(100 - sum)) sum += mushroom[i];
    else break;
  }

  cout << sum;

  return 0;
}