// Authored by: Arenslien
// BOJ: 2798 - 블랙잭

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, result = 0;
  cin >> N >> M;

  int card[N] = {};

  for (int i=0; i<N; i++) cin >> card[i];

  for (int i=0; i<N; i++) {
    for (int j=i+1; j<N; j++) {
      for (int k=j+1; k<N; k++) {
        int sum = card[i]+card[j]+card[k];
        if (result < sum && sum <= M) result = sum;
      }
    }
  }

  cout << result;

  return 0;
}