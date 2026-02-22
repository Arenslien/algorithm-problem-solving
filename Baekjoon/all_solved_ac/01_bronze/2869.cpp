// Authored by: Arenslien
// BOJ: 2869 - 달팽이는 올라가고 싶다

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int A, B, V;
  cin >> A >> B >> V;

  cout << (V-B-1)/(A-B) + 1; // (V-A+A-B-1)/(A-B) 

  return 0;
}