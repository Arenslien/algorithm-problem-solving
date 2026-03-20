// Authored by: Arenslien
// BOJ: 1941 - 소문난 칠공주

#include <iostream>
#include <utility>
#include <string>
#include <queue>
using namespace std;

#define X first
#define Y second

string students[5];
bool chosen[25];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt = 0;

bool bfs(int start_idx) {
  bool vis[5][5] = {false, };
  queue<pair<int, int>> Q;
  int s_cnt = 0, a_cnt = 0;

  int x = start_idx/5;
  int y = start_idx%5;
  Q.push({x, y});
  vis[x][y] = true;

  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();
    a_cnt++;
    if (students[cur.X][cur.Y] == 'S') s_cnt++;

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
      if (!chosen[5*nx + ny] || vis[nx][ny]) continue;

      vis[nx][ny] = true;
      Q.push({nx, ny});
    }
  }

  return (a_cnt == 7 && s_cnt >= 4);
}


void solve(int k, int start) {
  // 1. Base Condition
  if (k == 7) {
    for (int i=0; i<25; ++i) {
      if (chosen[i]) {
        if (bfs(i)) cnt++;
        break;
      }
    }
    return;
  }

  // 2. Backtracking
  for (int i=start; i<25; ++i) {
    chosen[i] = true;
    solve(k+1, i+1);
    chosen[i] = false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i=0; i<5; ++i) cin >> students[i];

  solve(0, 0);

  cout << cnt;

  return 0;
}