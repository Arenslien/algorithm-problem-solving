// Authored by: Arenslien
// BOJ: 1926 - 그림

#include <iostream>
#include <utility>
#include <queue>

using namespace std;

#define X first;
#define Y second;

int board[502][502];
bool vis[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, cnt = 0, max = 0;
  cin >> n >> m;

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      cin >> board[i][j]; 
    }
  }

  for (int i=0; i<n; ++i) {
    for (int j=0; j<m ++j) {
      queue<pair<int, int>> q;
      int breadth = 0;

      if (!vis[i][j])
      vis[i][j] = 1;
      q.push({i, j});

      while (!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();
        vis[cur.X][cur.Y] = 1;

        for (int dir=0; dir<4; ++dir) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
          if (vis[nx][ny] || board[nx][ny] != 1) continue;

          vis[nx][ny] = 1;
          q.push({nx, ny});
        }

      }

    }
  }


  cout << cnt << '\n' << max;

  return 0;
}