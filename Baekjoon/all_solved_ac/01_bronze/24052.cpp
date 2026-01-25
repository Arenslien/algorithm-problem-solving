// Authored by: Arenslien
// BOJ: 24052 - 알고리즘 수업 - 삽입 정렬 2

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K, cnt = 0;
  cin >> N >> K;


  int arr[N] = {};
  for (int i=0; i<N; ++i) cin >> arr[i];

  for (int i=1; i<N; ++i) {
    for (int j=i-1; j>-1; --j) {
      if (arr[j] > arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        cnt++;
        arr[j] = arr[i];
      }
    }
  }



  return 0;
}
// 0 1 2 3 4
// ---------
// 4 5 1 3 2 : 1
// 4 5 5 3 2 : 2    (temp = 1)
// 