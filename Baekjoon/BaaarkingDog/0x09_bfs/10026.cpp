// Authored by: Arenslien
// BOJ: 10026 - 적록색약

#include <iostream>
#include <utility> // pair 사용
#include <string>
#include <queue>

using namespace std;

#define X first
#define Y second

string board[100];
bool vis[100][100];
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int N, cnt = 0, cnt2 = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  for (int i=0; i<N; ++i) cin >> board[i];

  queue<pair<int, int>> Q;

  // normar color bfs
  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (vis[i][j]) continue;

      Q.push({i, j});
      vis[i][j] = true;
      cnt++;

      while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir=0; dir<4; ++dir) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
          if (vis[nx][ny] || board[cur.X][cur.Y] != board[nx][ny]) continue;

          Q.push({nx, ny});
          vis[nx][ny] = true;
        }
      }
    } 
  }

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (board[i][j] == 'G') board[i][j] = 'R';
    }
  }

  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      vis[i][j] = false;
    }
  }

  // blindness bfs
  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (vis[i][j]) continue;

      Q.push({i, j});
      vis[i][j] = true;
      cnt2++;

      while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir=0; dir<4; ++dir) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
          if (vis[nx][ny] || board[cur.X][cur.Y] != board[nx][ny]) continue;

          Q.push({nx, ny});
          vis[nx][ny] = true;
        }
      }
    } 
  }

  cout << cnt << ' ' << cnt2;

  return 0;
}