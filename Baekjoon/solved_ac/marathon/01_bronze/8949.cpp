// Authored by: Arenslien
// BOJ: 8949 - 대충 더해

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string A, B, result = "";
  cin >> A >> B;

  A = string(7-A.size(), '0') + A;
  B = string(7-B.size(), '0') + B;

  for (int i=0; i<7; ++i) {
    result += to_string(A[i]-'0' + B[i]-'0');
  }

  cout << stoll(result);

  return 0;
}