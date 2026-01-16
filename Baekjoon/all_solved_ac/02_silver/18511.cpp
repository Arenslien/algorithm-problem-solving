// Authored by: Arenslien
// BOJ: 18511 - 큰 수 구성하기

#include <iostream>
#include <string>

using namespace std;

// 시간초과 풀이
// int big_number_brute_force(int N, int K, int* arr) {
//   int result = 0;

//   for (int i=1; i<=N; ++i) {
//     string num = to_string(i);
//     bool is_different = false;

//     for (char digit : num) {
//       bool right_digit = false;
      
//       for (int j = 0; j < K; ++j) {
//         if (digit - '0' == arr[j]) {
//           right_digit = true;
//           break;
//         }
//       }
//       if (!right_digit) {
//         is_different = true;
//         break;
//       }
//     }

//     if (is_different) continue;

//     result = i;
//   }

//   return result;
// }

int big_number_recursive(int N, int current_num, int K, int* arr) {
  int result = current_num;

  for (int i=0; i<K; ++i) {
    int next_num = current_num * 10 + arr[i];

    if (next_num <= N) { 
      int candidate = big_number_recursive(N, next_num, K, arr); /// 
      if (candidate > result) result = candidate;
    }
  }

  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  int k[K] = {};
  for (int i=0; i<K; ++i) cin >> k[i];

  cout << big_number_recursive(N, 0, K, k);

  return 0;
}