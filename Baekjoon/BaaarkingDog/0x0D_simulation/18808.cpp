// Authored by: Arenslien 
// BOJ: 18808 - 스티커 붙이기

#include <iostream>
#include <utility>

using namespace std;

#define X first
#define Y second

bool notebook[40][40];
bool sticker[10][10];
bool rotated[10][10];
int N, M, K, R, C, ans = 0;

void rotate() {
  for (int i=0; i<R; ++i)
    for (int j=0; j<C; ++j)
      rotated[j][R-1-i] = sticker[i][j];

  int tmp = R;
  R = C; 
  C = tmp;

  for (int i=0; i<R; ++i)
    for (int j=0; j<C; ++j)
      sticker[i][j] = rotated[i][j];

  return;
}

void stick(int r, int c) {
  for (int i=0; i<R; ++i)
    for (int j=0; j<C; ++j)
      if (sticker[i][j])
        notebook[i+r][j+c] = 1;
  
  return;
}

bool check(int r, int c) {
  for (int i=0; i<R; ++i)
    for (int j=0; j<C; ++j)
      if (sticker[i][j] && notebook[i+r][j+c]) 
        return false;

  return true;
}

pair<int, int> move() {
  for (int r=0; r<=N-R; ++r)
    for (int c=0; c<=M-C; ++c)
      if (check(r, c)) 
        return {r, c};

  return {-1, -1};
}

void solve() {
  // 3.1 스티커 회전 횟수: 최대 3
  for (int i=0; i<4; ++i) {
    // 3.2 스티커 크기 체크
    if (R <= N && C <= M) {
      // 3.3 좌상단부터 스티커 배치 가능 유무 체크 
      pair<int, int> loc = move();

      if (loc.X != -1) {
        stick(loc.X, loc.Y);
        return;
      }
    }

    rotate();
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N, M, K 입력
  cin >> N >> M >> K;
  while (K--) {
    // 2. 스티커 입력
    cin >> R >> C;
    for (int i=0; i<R; ++i)
      for (int j=0; j<C; ++j)
        cin >> sticker[i][j];

    // 3. 스티커 붙이기 - 회전 & 버리기
    solve();
  }

  // 4. 스티커 공간 카운팅
  for (int i=0; i<N; ++i)
    for (int j=0; j<M; ++j)
      ans += notebook[i][j];

  cout << ans; // 5. 결과 출력 

  return 0;
}