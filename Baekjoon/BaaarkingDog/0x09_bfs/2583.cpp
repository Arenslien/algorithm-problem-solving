// Authored by: Arenslien
// BOJ: 2583 - 영역 구하기

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[100][100];
bool vis[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int M, N, K, area, cnt = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M >> N >> K;

  for (int i=0; i<K; ++i) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    for (int x=x1; x<x2; ++x)
    for (int y=y1; y<y2; ++y)
      board[y][x] = 1;
  }

  // for (int i=0; i<M; ++i) {
  //   for (int j=0; j<N; ++j) {
  //     cout << board[i][j] << ' ';
  //   }
  //   cout << '\n';
  // }

  queue<pair<int, int>> Q;
  vector<int> areas;

  for (int i=0; i<M; ++i) {
    for (int j=0; j<N; ++j) {
      if (board[i][j] || vis[i][j]) continue;

      // cout << '(' << i << ", " << j << ")\n";

      area = 0; cnt++;
      Q.push({i, j});
      vis[i][j] = true;

      while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        area++;

        for (int dir=0; dir<4; ++dir) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
          if (board[nx][ny] || vis[nx][ny]) continue;

          Q.push({nx, ny});
          vis[nx][ny] = true;
        }
      }
      areas.push_back(area);
    }
  }

  sort(areas.begin(), areas.end());

  cout << cnt << '\n';
  for (int area : areas) cout << area << ' ';

  return 0;
}
