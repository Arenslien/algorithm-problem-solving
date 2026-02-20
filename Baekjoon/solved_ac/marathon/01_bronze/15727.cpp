// Authored by: Arenslien
// BOJ: 15727 - 조별과제를 하려는데 조장이 사라졌다

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int L;
  cin >> L;

  cout << L/5 + (L%5 == 0 ? 0:1);
  
  return 0;
}