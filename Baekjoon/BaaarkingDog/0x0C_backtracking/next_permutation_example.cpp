// Authored by: Arenslien
// EXAMPLE CODE: next_permutation

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int arr[3] = {1, 2, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  do { // 순열
    for (int i=0; i<n; ++i) {
      cout << arr[i] << ' ';
    }
    cout << '\n';
  } while (next_permutation(arr, arr + n));

  // 조합
  int arr2[6] = {10, 20, 30, 40, 50, 60};

  // 1. 선택 여부를 결정할 마스크 배열 생성
  bool masked[6] = {0, 0, 0, 0, 1, 1}; // 0: 미선택, 1: 선택
  
  // 2. 마스크 배열의 순열을 구하면서 원본 데이터 매핑
  do {
    for (int i=0; i<6; ++i) {
      if (masked[i]) {
        cout << arr2[i] << ' ';
      }
    }
    cout << '\n';

  } while (next_permutation(masked, masked + 6));

  // 3. 최대 N 개 중 일부 k개의 순열만 돌리는 경우는?
  int arr3[5] = {1, 4, 2, 3, 5}; // --> 1, 2, 4 조합은 건너 뜀
  int k = 3;

  do {
    for (int i=0; i<k; ++i) {
      cout << arr3[i] << ' ';
    }
    cout << '\n';
  } while (next_permutation(arr3, arr3 + k));

  return 0;
}