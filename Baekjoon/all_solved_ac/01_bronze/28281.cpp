// Authored by: Arenslien
// BOJ: 28281 - 선물

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, X, result = 2000000005;
  cin >> N >> X;

  int arr[N] = {};
  for (int i=0; i<N; ++i) cin >> arr[i];

  for(int i=0; i<N-1; ++i) {
    int sum = X * arr[i] + X * arr[i+1];

    if (sum < result) result = sum;
  }

  cout << result;

  return 0;
}