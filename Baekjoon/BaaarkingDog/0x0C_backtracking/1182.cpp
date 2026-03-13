// Authored by: Arenslien
// BOJ: 1182 - 부분수열의 합

#include <iostream>
#include <numeric> // accumulate 사용

using namespace std;

int arr[20];
int sub_arr[20];
bool is_used[20];

int N, S, cnt = 0;

void solve(int k) {
  // 1. Base Condition
  if (k == N) {
    return;
  }

  // 2. Backtracking
  for (int i=0; i<N; ++i) {
    if (is_used[i]) continue;

    sub_arr[k] = arr[i];
    is_used[i] = true;
    if (S == accumulate(sub_arr, sub_arr + k+1, 0)) cnt++;
    solve(k+1);
    is_used[i] = false; 
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> S;

  for (int i=0; i<N; ++i) cin >> arr[i];

  solve(0);

  cout << cnt;

  return 0;
}