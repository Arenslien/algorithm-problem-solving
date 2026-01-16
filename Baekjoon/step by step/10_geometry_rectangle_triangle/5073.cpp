// Authored by : Arenslien
// BOJ : 5073번 - 삼각형과 세 변

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  while (true) {
    int a[3] = {};
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);

    if (a[0] + a[1] + a[2] == 0) return 0;
    else if (a[2] >= a[0] + a[1]) cout << "Invalid";
    else if (a[0] == a[1] && a[1] == a[2]) cout << "Equilateral";
    else if (a[0] == a[1] || a[1] == a[2] || a[2] == a[0]) cout << "Isosceles";
    else cout << "Scalene";
    cout << '\n';
  }

  return 0;
}
