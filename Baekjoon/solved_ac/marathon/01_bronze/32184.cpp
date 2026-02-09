// Authored by: Arenslien
// BOJ: 32184: 디미고에 가고 싶어!

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int A, B;
  cin >> A >> B;

  int page_a = (A+1) >> 1;
  int page_b = (B+1) >> 1;

  cout << page_b - page_a + 1; // cout << ((B+1) >> 1) - ((A+1) >> 1) + 1;

  return 0;
}