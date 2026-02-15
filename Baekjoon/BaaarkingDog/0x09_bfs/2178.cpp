// Authored by: Arenslien
// BOJ: 2178 - 미로 탐색

#include <iostream>
#include <utility> // pair 사용
#include <string>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[102][102];    // 문제조건 최대 100
int len[102][102];
bool vis[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N, M;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  for (int i=0; i<N; ++i) {
    string maze;
    cin >> maze;
    
    for (int j=0; j<M; ++j) {
      board[i][j] = maze[j] - '0';
      len[i][j] = 10005;
    }
  }

  queue<pair<int, int>> q;

  q.push({0, 0});
  len[0][0] = 1;
  vis[0][0] = true;

  while (!q.empty()) {
    pair<int, int> cur = q.front(); q.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (!board[nx][ny] || vis[nx][ny]) continue;

      len[nx][ny] = len[cur.X][cur.Y] + 1;
      vis[nx][ny] = true;
      q.push({nx, ny});
    }
  }

  cout << len[N-1][M-1];

  return 0;
}