#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0); // false
  cin.tie(0); // nullptr

  int a, b;
  cin >> a >> b;
  cout << a+b;

  return 0;
}