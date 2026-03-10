// Authored by: Arenslien
// BOJ: 2448 - 별 찍기 11

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string star[3] = {"  *  ", " * * ", "*****"};
vector<string> canvas;
int N;

void draw_star(int r, int c, int N) {
  // 1. Base Condition (N=3)
  if (N == 3) {
    for (int i=0; i<3; ++i) {
      for (int j=0; j<5; ++j) {
        canvas[i + r][c + j - 2] = star[i][j];
      }
    }
    return;
  }

  // 2. 분할 정복
  int n = N/2;
  draw_star(r, c, n);
  draw_star(r+n, c-n, n);
  draw_star(r+n, c+n, n);

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cin >> N;

  canvas.assign(N, string(2*N, ' '));

  draw_star(0, N-1, N);

  for (int i=0; i<N; ++i) cout << canvas[i] << '\n';

  return 0;
}