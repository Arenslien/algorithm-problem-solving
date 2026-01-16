// Authored by: Arenslien
// BOJ: 18301 - Rats

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n1, n2, n12;
  cin >> n1 >> n2 >> n12;

  cout << (n1+1)*(n2+1)/(n12+1) - 1;

  return 0;
}