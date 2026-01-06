// Authored by: Arenslien
// BOJ: 25305 - 커트라인

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, k;
  cin >> N >> k;

  int score[N] = {};
  for (int i=0; i<N; ++i) cin >> score[i];

  sort(score, score+N);

  cout << score[N-k];

  return 0;
}