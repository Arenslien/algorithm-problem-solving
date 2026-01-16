// Authored by : Arenslien
// BOJ : 10101번 - 삼각형 외우기

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  if (a1+a2+a3 != 180) cout << "Error";
  else if (a1 == a2 && a2 == a3) cout << "Equilateral";
  else if (a1 == a2 || a2 == a3 || a3 == a1) cout << "Isosceles";
  else cout << "Scalene";

  return 0;
}
