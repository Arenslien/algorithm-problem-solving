// Authored by: Arenslien
// BOJ: 7562 - 나이트의 이동

#include <algorithm>
#include <iostream>
#include <utility>
#include <queue>

using namespace std;

#define X first
#define Y second

int vis[300][300];

const int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
const int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    for (int i=0; i<300; ++i) {
      for (int j=0; j<300; ++j) {
        vis[i][j] = -1;
      }
    }
    // fill(&vis, vis + 300, -1); // 초기화

    int l, x, y, x2, y2;
    cin >> l >> x >> y >> x2 >> y2;

    queue<pair<int, int>> Q;
    Q.push({x, y});
    vis[x][y] = 0;

    // BFS
    while (!Q.empty()) {
      pair<int, int> cur = Q.front(); Q.pop();

      for (int dir=0; dir<8; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
        if (vis[nx][ny] != -1) continue;

        Q.push({nx, ny});
        vis[nx][ny] = vis[cur.X][cur.Y] + 1;
      }
    }
    
    // 결과 출력
    cout << vis[x2][y2] << '\n';
  }

  return 0;
}