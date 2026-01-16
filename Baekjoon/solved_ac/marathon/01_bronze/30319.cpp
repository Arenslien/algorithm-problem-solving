// Authored by: Arenslien
// BOJ: 30319 - Advance to Taoyuan Regional

#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string date;
  cin >> date;

  int month = stoi(date.substr(5, 2));
  int day = stoi(date.substr(8, 2));

  if (month <= 8) cout << "GOOD";
  else if (month == 9 && day <= 16) cout << "GOOD";
  else cout << "TOO LATE";

  return 0;
}