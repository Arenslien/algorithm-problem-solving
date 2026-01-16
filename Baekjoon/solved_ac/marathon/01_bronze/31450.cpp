// Authored by : Arenslien
// BOJ : 31450번 - Everyone is a winner.

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int M, K;
  cin >> M >> K;
  
  cout << (M%K == 0 ? "Yes":"No");

  return 0;
}
