// Authored by: Arenslien
// BOJ: 34813 - 공통교육과정

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string code;
  cin >> code;

  if (code[0] == 'F') cout << "Foundation";
  else if (code[0] == 'C') cout << "Claves";
  else if (code[0] == 'V') cout << "Veritas";
  else cout << "Exploration";

  return 0;
}