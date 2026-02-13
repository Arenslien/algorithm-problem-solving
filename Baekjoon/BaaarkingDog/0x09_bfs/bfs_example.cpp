// Authored by: Arenslien
// STUDY: BFS example;

#include <iostream>
#include <utility> // pair 사용
#include <queue> // queue 사용

using namespace std;

#define X first
#define Y second

int n = 7, m = 10;
int board[502][502] = {{1,1,1,0,1,0,0,0,0,0},
                       {1,0,0,0,1,0,0,0,0,0},
                       {1,1,1,0,1,0,0,0,0,0},
                       {1,1,0,0,1,0,0,0,0,0},
                       {0,1,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0,0,0}}; // 1이 파란 칸, 0이 빨간 칸에 대응
bool visited[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  queue<pair<int, int>> q;
  q.push({0, 0});
  visited[0][0] = 1;

  cout << "(0, 0) -> ";

  while (!q.empty()) {
    pair<int, int> cur = q.front(); q.pop();
    visited[cur.X][cur.Y] = 1;

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (visited[nx][ny] || board[nx][ny] != 1) continue;

      cout << '(' << nx << ", " << ny << ") -> ";

      visited[nx][ny] = 1;
      q.push({nx, ny});
    }
  }

  return 0;
}