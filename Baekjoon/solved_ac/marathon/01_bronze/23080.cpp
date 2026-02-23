// Authored by: Arenslien
// BOJ: 23080 - 스키테일 암호

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int K;
  string S;
  
  cin >> K >> S;

  for (int i = 0; i < S.size(); ++i) {
    if (i % K == 0) cout << S[i];
  }

  return 0;
}