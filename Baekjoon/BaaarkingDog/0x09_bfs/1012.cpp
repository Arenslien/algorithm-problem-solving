// Authored by: Arenslien
// BOJ: 1012 - 유기농 배추

#include <iostream>
#include <utility> // pair
#include <queue>

using namespace std;

#define X first
#define Y second

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int T, M, N, K;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  cin >> T;
  
  while (T--) {
    int board[50][50] = {};
    bool vis[50][50] = {};

    cin >> M >> N >> K;

    while (K--) {
      int x, y;
      cin >> x >> y;
      board[x][y] = 1;
    }

    int cnt = 0;
    queue<pair<int, int>> Q;
    
    for (int i=0; i<M; ++i) {
      for (int j=0; j<N; ++j) {
        if (vis[i][j] || !board[i][j]) continue;

        Q.push({i, j});
        vis[i][j] = true;
        cnt++;

        while (!Q.empty()) {
          pair<int, int> cur = Q.front(); Q.pop();

          for (int dir=0; dir<4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (vis[nx][ny] || !board[nx][ny]) continue;

            Q.push({nx, ny});
            vis[nx][ny] = true;
          }
        }
      }
    }

    cout << cnt << '\n';
  }

  return 0;
}