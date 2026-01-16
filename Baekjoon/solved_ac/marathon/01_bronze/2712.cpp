#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(4);

  int T;
  cin >> T;
  while (T--) {
    double val;
    string measure;

    cin >> val >> measure;

    if (measure == "kg") cout << val * 2.2046 << ' ' << "lb";
    else if (measure == "lb") cout << val * 0.4536 << ' ' << "kg";
    else if (measure == "l") cout << val * 0.2642 << ' ' << "g";
    else cout << val * 3.7854 << ' ' << "l";
    cout << '\n';
  }

  return 0;
}