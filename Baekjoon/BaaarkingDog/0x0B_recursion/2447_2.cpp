// Authored by: Arenslien
// BOJ: 2447 - 별 찍기 10

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int N;
vector<string> canvas;

void draw_star(int r, int c, int N) {
  if (N == 1) {
    canvas[r][c] = '*';
    return;
  }

  int n = N/3;

  for (int i=0; i<3; ++i) {
    for (int j=0; j<3; ++j) {
      if (i == 1 && j == 1) continue;

      draw_star(n*i + r, n*j + c, n);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N 입력
  cin >> N;
  
  // 2. N * N 사이즈 공백 캔버스 생성
  canvas.assign(N, string(N, ' '));

  // 3. 재귀
  draw_star(0, 0, N);

  // 4. 결과 출력
  for (int i=0; i<N; ++i) cout << canvas[i] << '\n';
  
  return 0;
}