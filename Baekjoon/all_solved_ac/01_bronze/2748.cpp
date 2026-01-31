// Authored by: Arenslien
// BOJ: 2748 - 피보나치 수 2

#include <iostream>

using namespace std;

// 첫 번째 풀이 - 정답.
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n;
//   cin >> n;

//   long long arr[91] = {};
//   arr[0] = 0;
//   arr[1] = 1;

//   for (int i=2; i<91; ++i) {
//     arr[i] = arr[i-1] + arr[i-2];
//   }

//   cout << arr[n];

//   return 0;
// }

// 두 번째 풀이.
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  long long fn_1 = 0; // F(n-1) 
  long long fn_2 = 1; // F(n-2)
  long long fn = 1;   // F(n)

  for (int i=2; i<=n; ++i) {
    fn = fn_1 + fn_2;
    fn_1 = fn_2;
    fn_2 = fn;
  }

  cout << fn;

  return 0;
}

