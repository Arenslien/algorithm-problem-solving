// Authored by: Arenslien
// BOJ: 28235번 - 코드마스터 2023

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  if (s[0] == 'S') cout << "HIGHSCHOOL";
  else if (s[0] == 'C') cout << "MASTER";
  else if (s[0] == '2') cout << "0611";
  else cout << "CONTEST";

  return 0;
}