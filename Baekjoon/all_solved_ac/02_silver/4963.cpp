// Authored by: Arenslien
// BOJ: 4963 - 섬의 개수

#include <iostream>
#include <utility>
#include <stack>

using namespace std;

#define X first
#define Y second

int board[50][50];
bool vis[50][50];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int w, h;

void dfs(int x, int y) {
  stack<pair<int, int>> S;
  S.push({x, y});
  vis[x][y] = true;

  while (!S.empty()) {
    pair<int, int> cur = S.top(); S.pop();

    for (int dir=0; dir<8; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (board[nx][ny] == 0 || vis[nx][ny]) continue;

      vis[nx][ny] = true;
      S.push({nx, ny});
    }
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    cin >> w >> h;
    if (w + h == 0) break;

    // 1. 지도 입력
    for (int i=0; i<h; ++i) {
      for (int j=0; j<w; ++j) {
        cin >> board[i][j];
      }
    }

    int cnt = 0;
    // 2. DFS(BFS는 queue)
    for (int i=0; i<h; ++i) {
      for (int j=0; j<w; ++j) {
        if (board[i][j] == 0 || vis[i][j]) continue;

        dfs(i, j);
        cnt++;
      }
    }

    cout << cnt << '\n';
  }

  return 0;
}