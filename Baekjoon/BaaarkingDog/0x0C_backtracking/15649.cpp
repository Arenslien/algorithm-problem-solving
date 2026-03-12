// Authored by: Arenslien
// BOJ: 15649 - N과 M (1)

#include <iostream>

using namespace std;

int N, M;
int arr[8];
bool is_used[8];

void backtracking(int k) {
  // 1. Base Condition
  if (k == M) {
    for (int i=0; i<M; ++i) cout << arr[i] << ' ';
    cout << '\n';
    return;
  }

  // 2. Back-Tracking
  for (int i=0; i<N; ++i) {
    if (is_used[i]) continue;

    arr[k] = i+1;
    is_used[i] = true;
    backtracking(k+1);
    is_used[i] = false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M; // 1. N, M 입력

  backtracking(0);

  return 0;
}