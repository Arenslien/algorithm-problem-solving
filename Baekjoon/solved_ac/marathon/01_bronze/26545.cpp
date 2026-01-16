// Authored by: Arenslien
// BOJ: 26545 - Mathematics

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, sum = 0;
  cin >> n;

  while (n--) {
    int x;
    cin >> x;
    sum += x;
  }

  cout << sum;

  return 0;
}