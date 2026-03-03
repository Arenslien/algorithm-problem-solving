// Authored by: Arenslien
// DFS CODE EXAMPLE

#include <iostream>
#include <utility>
#include <stack>

using namespace std;

#define X first
#define Y second

int board[1000][1000];
bool vis[1000][1000];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int M, N, cnt = 0;

void dfs(int x, int y) {
  stack<pair<int, int>> S;
  vis[x][y] = true;
  S.push({x, y});

  while (!S.empty()) {
    pair<int, int> cur = S.top(); S.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
      if (board[nx][ny] == 0 || vis[nx][ny]) continue;

      vis[nx][ny] = true;
      S.push({nx, ny});
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M >> N; // 행, 열 입력 받고
  
  for (int i=0; i<M; ++i) { // 행
    for (int j=0; j<N; ++j) { // 열
      cin >> board[i][j]; // 지도 입력
    }
  }

  for (int i=0; i<M; ++i) {
    for (int j=0; j<N; ++j) {
      // dfs 조건: 1이면서 안 간 곳
      if (board[i][j] == 0 || vis[i][j]) continue;
      
      cout << '(' << i << ", " << j << ')' << '\n';
      dfs(i, j);
      cnt++;
    }
  }

  cout << "구역(연결된 1 지역) 개수: " << cnt;

  return 0;
}