// Authored by: Arenslien
// BOJ: 2447 - 별 찍기 10

#include <iostream>

using namespace std;

bool canvas[2187][2187]; 
int N;

void draw_star(int N) {
  // 0. Base Condition
  if (N == 3) {
    for (int x=0; x<3; ++x) {
      for (int y=0; y<3; ++y) {
        if (x == 1 && y == 1) continue;
        canvas[x][y] = true;
      }
    }
    return;
  }

  // 1. 이전 N/3 별 찍기
  int n = N/3;
  draw_star(n);

  // 2. N 별 찍기
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      for (int x=0; x<3; ++x) {
        for (int y=0; y<3; ++y) {
          if (x == 1 && y == 1) continue;
          canvas[n*x + i][n*y + j] = canvas[i][j];
        }
      }
    }
  }

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N; // 1. 입력

  draw_star(N); // 2. 재귀

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      cout << (canvas[i][j] ? '*':' ');
    }
    cout << '\n';
  }

  return 0;
}