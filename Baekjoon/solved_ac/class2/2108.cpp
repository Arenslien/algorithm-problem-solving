#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, sum = 0;
  cin >> N;

  int arr[N] = {}, cnt[8001] = {};


  for (int i=0; i<N; i++) {
    cin >> arr[i]; // 정렬 후 중앙 값 활용

    sum += arr[i]; // 산술 평균 활용
    cnt[arr[i]]++; // 최빈값 활용
  }

  sort(arr, arr+N);

  cout << setprecision(2);
  cout << sum/N;
  cout << arr[N/2];
  // cout << 
  cout << arr[N-1] - arr[0];


  return 0;
}