#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int N, money, gain = 0, arr[3];
    cin >> N;

    while (N--) {
      cin >> arr[0] >> arr[1] >> arr[2];
      money = *max_element(arr, arr+3);
      gain += (money > 0 ? money:0);
    }
    cout << gain << '\n';
  } 

  return 0;
}