// Authored by: Arenslien
// BOJ: 1992 - 쿼드트리

#include <iostream>
#include <string>

using namespace std;

int video[64][64];
int N;
string s;

bool check(int x, int y, int N) {
  for (int i=x; i<x+N; ++i)
  for (int j=y; j<y+N; ++j)
    if (video[x][y] != video[i][j]) return false;

  return true;
}

void quadtree(int x, int y, int N) {
  // 1. 전체 체크
  if (check(x, y, N)) {
    cout << video[x][y] - '0';
    return;
  }

  // 2. 재귀 분할
  int n = N/2;

  cout << '(';
  for (int i=0; i<2; ++i) {
    for (int j=0; j<2; ++j) {
      quadtree(x + i*n, y + j*n, n);
    }
  }
  cout << ')';
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N & 영상 입력
  cin >> N;
  for (int i=0; i<N; ++i) {
    cin >> s;
    for (int j=0; j<N; ++j) {
      video[i][j] = s[j];
    }
  }

  // 2. 재귀
  quadtree(0, 0, N);

  return 0;
}