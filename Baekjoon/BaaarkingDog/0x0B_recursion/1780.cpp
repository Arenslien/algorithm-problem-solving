// Authored by: Arenslien
// BOJ: 1780 - 종이의 개수

#include <iostream>

using namespace std;

int paper[2187][2187];
int cnt[3];

void count_paper(int N, int r, int c) {
  // 1. 전체 종이 체크
  bool is_same = true;

  for (int i=r; i<r+N; ++i) {
    for (int j=c; j<c+N; ++j) {
      if (paper[r][c] != paper[i][j]) {
        is_same = false;
        break;
      }
    }
  }

  if (is_same) {
    cnt[paper[r][c] + 1]++;
    return;
  }
  
  // 2. 9등분 시작
  int n = N/3;
  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
      count_paper(n, i * n + r, j * n + c);
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 0. N과 종이 값 입력
  int N; cin >> N;

  for (int i=0; i<N; ++i)
  for (int j=0; j<N; ++j)
    cin >> paper[i][j];

  // 1. 재귀
  count_paper(N, 0, 0);

  // 2. 결과 출력
  for (int num : cnt) cout << num << '\n';

  return 0;
}