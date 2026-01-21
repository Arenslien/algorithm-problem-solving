// Authored by: Arenslien
// BOJ: 13985 - Equality

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string expression;
  getline(cin, expression);

  cout << (expression[0]-'0' + expression[4]-'0' == expression[8]-'0' ? "YES" : "NO");

  return 0;
}