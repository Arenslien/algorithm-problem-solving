// Authored by: Arenslien
// BOJ: 14502 - 연구소

#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second

int lab[8][8];
int N, M, ans = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs() {
  bool vis[8][8] = {false, };
  queue<pair<int, int>> Q;
  int cnt = 0;

  // 1. 바이러스 입력
  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      if (lab[i][j] == 2) {
        Q.push({i, j});
        vis[i][j] = true;
      }
    }
  }

  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if (vis[nx][ny] || lab[nx][ny]) continue;
      
      Q.push({nx, ny});
      vis[nx][ny] = true;
    }
  }

  for (int i=0; i<N; ++i)
  for (int j=0; j<M; ++j)
    if (lab[i][j] == 0 && !vis[i][j]) cnt++;

  return cnt;
}

void solve(int k, int start) {
  // 1. Base Condition
  if (k == 3) {
    int cnt = bfs();
    if (ans < cnt) ans = cnt;
    return;
  }

  // 2. Backtracking - 벽 세우기
  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      if (lab[i][j]) continue; // 1(벽), 2(바이러스) 패스
      
      lab[i][j] = 1;
      solve(k+1, i+1);
      lab[i][j] = 0;
    }
  }
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;
  for (int i=0; i<N; ++i)
  for (int j=0; j<M; ++j)
    cin >> lab[i][j];

  solve(0, 0);

  cout << ans;

  return 0;
}