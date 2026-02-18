#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int arr[500005];
int cnt[8001];
int N, sum, mode1, mode2 = 4005, max_cnt = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> arr[i]; // N 개 담을 배열

    sum += arr[i]; // 산술 평균 활용
    cnt[arr[i] + 4000]++; // 최빈값 활용
  }

  sort(arr, arr+N);

  // 최빈값 계산
  for (int i=8000; i>=0; i--  ) {
    if (!cnt[i]) continue;
    if (max_cnt < cnt[i]) { 
      max_cnt = cnt[i];
      mode1 = i - 4000;
      mode2 = 4005;
    }
    else if (max_cnt == cnt[i]) {
      mode2 = mode1;
      mode1 = i - 4000;
    }
  }

  cout << int(round(sum/(double)N)) << '\n'; // 산술평균: 소수짐 이하 첫째 짜리에서 반올림.
  cout << arr[N/2] << '\n'; // 중앙값;
  cout << (mode2 == 4005 ? mode1:mode2) << '\n';
  cout << arr[N-1] - arr[0];

  return 0;
}