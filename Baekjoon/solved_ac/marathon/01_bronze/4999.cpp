// Authored by : Arenslien
// BOJ : 4999번 - 아!

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string jh, doctor;
  cin >> jh >> doctor;

  if (jh.size() >= doctor.size()) cout << "go";
  else cout << "no";

  return 0;
}