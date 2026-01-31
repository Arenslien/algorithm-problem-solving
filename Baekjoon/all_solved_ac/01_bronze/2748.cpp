// Authored by: Arenslien
// BOJ: 2748 - 피보나치 수 2

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  long long arr[91] = {};
  arr[0] = 0;
  arr[1] = 1;

  for (int i=2; i<91; ++i) {
    arr[i] = arr[i-1] + arr[i-2];
  }

  cout << arr[n];

  return 0;
}