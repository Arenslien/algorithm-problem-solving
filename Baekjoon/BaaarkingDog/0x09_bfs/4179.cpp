// Authored by: Arenslien
// BOJ: 4179 - 불!

#include <iostream>
#include <utility> // pair 사용
#include <string>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[1005][1005];
int vis_F[1005][1005];
int vis_J[1005][1005];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int R, C;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> R >> C;

  queue<pair<int, int>> Q_F;
  queue<pair<int, int>> Q_J;

  for (int i=0; i<R; ++i) {
    string map_row;
    cin >> map_row;

    for(int j=0; j<C; ++j) {
      board[i][j] = (map_row[j] == '#' ? 1:0);

      if (map_row[j] == 'F') { 
        Q_F.push({i, j});
        vis_F[i][j] = 1;
      }
      else if (map_row[j] == 'J') {
        Q_J.push({i, j});
        vis_J[i][j] = 1;
      }
    }
  }

  while (!Q_F.empty()) {
    pair<int, int> cur = Q_F.front(); Q_F.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if (vis_F[nx][ny] || board[nx][ny]) continue;

      Q_F.push({nx, ny});
      vis_F[nx][ny] = vis_F[cur.X][cur.Y] + 1;
    }
  }

  while (!Q_J.empty()) {
    pair<int, int> cur = Q_J.front(); Q_J.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
        cout << vis_J[cur.X][cur.Y];
        return 0;
      }
      if (vis_J[nx][ny] || board[nx][ny]) continue;
      if (vis_F[nx][ny] != 0 && vis_J[cur.X][cur.Y] + 1 >= vis_F[nx][ny]) continue;

      Q_J.push({nx, ny});
      vis_J[nx][ny] = vis_J[cur.X][cur.Y] + 1;
    }
  }

  cout << "IMPOSSIBLE";

  return 0;
}