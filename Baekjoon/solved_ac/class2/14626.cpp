#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string isbn;
  cin >> isbn;

  int sum = 0;
  bool is_odd;

  for (int i=0; i<13; i++) {
    if (isbn[i] == '*') is_odd = (i%2 == 0);
    else sum += ((isbn[i] - '0')*(i%2 == 0 ? 1:3));
  }

  for (int i=0; i<=9; i++) {
    if ((sum + (is_odd ? 1:3)*i)%10 == 0) cout << i; 
  }

  return 0;
}