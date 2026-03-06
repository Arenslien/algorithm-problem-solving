// Authored by: Arenslien
// BOJ: 1780 - 종이의 개수

#include <iostream>

using namespace std;

int paper[2187][2187];
int cnt[3];

void count_paper(int N, int r, int c) {
  if (N == 1) return;
  int sum = 0;
  
  // 1. 모든 종이 체크
  for (int i=N*r; i<N*r+N; ++i) {
    for (int j=N*c; j<N*c+N; ++j) {
      sum += paper[i][j];
    }
  }

  if (sum == N * N * -1) cnt[0]++;
  else if (sum == 0) cnt[1]++;
  else if (sum == N * N) cnt[2]++;
  else {
    count_paper(N/3, 0, 0);
    count_paper(N/3, 0, 1);
    count_paper(N/3, 0, 2);
    count_paper(N/3, 1, 0);
    count_paper(N/3, 1, 1);
    count_paper(N/3, 1, 2);
    count_paper(N/3, 2, 0);
    count_paper(N/3, 2, 1);
    count_paper(N/3, 2, 2);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 0. N과 종이 값 입력
  int N; cin >> N;
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; ++j) {
      cin >> paper[i][j];
    }
  }

  // 1. 재귀
  count_paper(N, 0, 0);

  // 2. 결과 출력
  for (int num : cnt) cout << num << ' ';

  return 0;
}