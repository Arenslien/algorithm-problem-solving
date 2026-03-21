// Authored by: Arenslien
// BOJ: 14940 - 쉬운 최단거리

#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second

int board[1000][1000];
int dis[1000][1000];
int N, M;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  queue<pair<int, int>> Q;

  cin >> N >> M;
  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      cin >> board[i][j];
      if (board[i][j] == 2) Q.push({i, j});
    }
  }

  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
    
      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (board[nx][ny] != 1 || dis[nx][ny]) continue;

      Q.push({nx, ny});
      dis[nx][ny] = dis[cur.X][cur.Y] + 1;
    }
  }
  
  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      if (board[i][j] == 1 && !dis[i][j]) dis[i][j] = -1;

      cout << dis[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}