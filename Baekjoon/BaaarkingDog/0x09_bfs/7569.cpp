// Authored by: Arenslien
// BOJ: 7569 - 토마토

#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

const int dx[6] = {1, 0, -1, 0, 0, 0}; // 가로
const int dy[6] = {0, 1, 0, -1, 0, 0}; // 세로
const int dz[6] = {0, 0, 0, 0, 1, -1}; // 높이
int board[100][100][100];
int M, N, H, day = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 0. 큐
  queue<tuple<int, int, int>> Q;

  // 1. M, N, H 입력 
  cin >> M >> N >> H;

  // 2. 토마토 정보 입력 및 익은 토마토 미리 담기
  for (int i=0; i<H; ++i) { // i: 높이
    for (int j=0; j<N; ++j) { // j: 세로
      for (int k=0; k<M; ++k) { // k: 가로
        cin >> board[k][j][i];
        
        if (board[k][j][i] == 1) Q.push({k, j, i});
      }
    }
  }

  // 3. BFS
  while (!Q.empty()) {
    tuple<int, int, int> cur = Q.front(); Q.pop();

    for (int dir=0; dir<6; ++dir) {
      int nx = get<0>(cur) + dx[dir];
      int ny = get<1>(cur) + dy[dir];
      int nz = get<2>(cur) + dz[dir];

      if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H) continue;
      if (board[nx][ny][nz] != 0) continue;

      Q.push({nx, ny, nz});
      board[nx][ny][nz] = board[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
    }
  }

  // 4. 결과값 출력
  for (int i=0; i<H; ++i) { // i: 높이
    for (int j=0; j<N; ++j) { // j: 세로
      for (int k=0; k<M; ++k) { // k: 가로        
        if (board[k][j][i] == 0) { cout << -1; return 0; }
        if (board[k][j][i] > day) day = board[k][j][i];
      }
    }
  }

  cout << day -1;

  return 0;  
}