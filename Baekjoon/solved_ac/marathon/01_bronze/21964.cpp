// Authored by: Arenslien
// BOJ:21964 - 선린인터넷고등학교 교가

#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  cin >> S;

  for (int i=N-5; i<N; ++i) cout << S[i];

  return 0;
}