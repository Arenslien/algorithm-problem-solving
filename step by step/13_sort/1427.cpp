// Authored by: Arenslien
// BOJ: 1427 - 소트인사이드

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string N;
  cin >> N;
  
  int cnt[10] = {};
  for (char digit : N) cnt[digit - '0']++;

  for (int i=9; i>=0; --i) {
    while (cnt[i]--) cout << i;
  }

  return 0;
}