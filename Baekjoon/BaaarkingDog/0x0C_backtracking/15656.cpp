// Authored by: Arenslien
// BOJ: 15656 - N과 M (7)

#include <algorithm>
#include <iostream>
using namespace std;

int result[7], arr[7];
int N, M;

void solve(int k) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << result[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=0; i<N; ++i) {
    result[k] = arr[i];
    solve(k+1);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N, M & N개의 자연수 입력
  cin >> N >> M;
  for (int i=0; i<N; ++i) cin >> arr[i];
  
  sort(arr, arr+N); // 2. 정렬

  solve(0);

  return 0;
}