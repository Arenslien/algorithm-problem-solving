// Authored by: Arenslien
// BOJ: 2630 - 색종이 만들기

#include <iostream>

using namespace std;

int colored_paper[128][128], cnt[2];
int N;

bool check(int x, int y, int N) {
  for (int i=x; i<x+N; ++i)
  for (int j=y; j<y+N; ++j)
    if (colored_paper[x][y] != colored_paper[i][j]) return false;

  return true;
}

void count_colored_paper(int x, int y, int N) {
  // 1. 체크
  if (check(x, y, N)) { 
    cnt[colored_paper[x][y]]++; 
    return;
  }

  // 2. 분할
  int n = N/2;
  for (int i=0; i<2; ++i) {
    for (int j=0; j<2; ++j) {
      count_colored_paper(x + i * n, y + j * n, n);
    }
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N & 색종이 입력
  cin >> N;

  for (int i=0; i<N; ++i)
  for (int j=0; j<N; ++j)
    cin >> colored_paper[i][j];

  // 2. 색종이 카운팅 - 재귀
  count_colored_paper(0, 0, N);

  // 3. 결과 출력
  cout << cnt[0] << '\n' << cnt[1];

  return 0;
}