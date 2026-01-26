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
  int result[N] = {};

  for (int i=0; i<N; ++i) cin >> arr[i];

  for (int i=1; i<N; ++i) {
    int j, temp = arr[i];

    for (j=i-1; arr[j] > temp; --j) {
      arr[j+1] = arr[j];
      cnt++;

      if (cnt == K) {
        for (int k=0; k<N; ++k) result[k] = arr[k];
      }
    }

    if (j + 1 != i) {
      arr[j + 1] = temp;
      cnt++;
    }

  }

  if (cnt < K) cout << -1;
  else {
    for (int i=0; i<N; ++i) cout << result[i] << ' ';
  }

  return 0;
}
// 0 1 2 3 4
// ---------
// 4 5 1 3 2 : 0

// 4 5 5 3 2 : 1    (temp = 1)
// 4 4 5 3 2 : 2    (temp = 1)
// 1 4 5 3 2 : 3    (temp = ?)

// 1 4 5 5 2 : 4    (temp = 3)
// 1 4 4 5 2 : 5    (temp = 3)
// 1 3 4 5 2 : 6    (temp = ?)

// 1 3 4 5 5 : 7    (temp = 2)
// 1 3 4 4 5 : 8    (temp = 2)
// 1 3 3 4 5 : 9   (temp = 2)
// 1 2 3 4 5 : 10   (temp = ?)
