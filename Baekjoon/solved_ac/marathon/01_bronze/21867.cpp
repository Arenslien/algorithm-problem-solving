// Authored by: Arenslien
// BOJ: 21867 - Java Bitecode

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  string S, result = "";
  cin >> N >> S;

  for (int i=0; i<N; ++i) {
    if (S[i] != 'J' && S[i] != 'A' && S[i] != 'V') result += S[i];
  }

  cout << (result.size() ? result:"nojava");

  return 0;
}
