// Authored by: Arenslien
// BOJ: 18810 - solved.ac

#include <algorithm> // sort 사용
#include <iostream>
#include <cmath> // round 사용

using namespace std;

int arr[300005], n, sum = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;

  int limit = round(n * 15 / 100.0);

  for (int i=0; i<n; ++i) cin >> arr[i];

  sort(arr, arr+n);

  for(int i=limit; i<n-limit; ++i) sum += arr[i];

  if (n == 0) cout << 0;
  else cout << round((double)sum/(n-limit-limit));
  
  return 0;
}