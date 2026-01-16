// Authored by : Arenslien
// BOJ : 32314번 - Christmas Tree Adapter

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int a, w, v;
  cin >> a >> w >> v;
  
  cout << (a <= w/v ? 1:0);

  return 0;
}
