#include <iostream>

using namespace std;

int arr[1000001];
bool occur[2000001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, x, cnt = 0;
  
  cin >> n;
  for (int i=0; i<n; i++) cin >> arr[i];
  cin >> x;

  for (int i=0; i<n; i++) {
    if (x-arr[i] > 0 && occur[x-arr[i]]) cnt++;
    occur[arr[i]] = true;
  }

  cout << cnt;

  return 0;
}
