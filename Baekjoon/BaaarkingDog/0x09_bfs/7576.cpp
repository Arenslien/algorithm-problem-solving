// Authored by: Arenslien
// BOJ: 7576 - 토마토

#include <iostream>
#include <utility>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[1002][1002];

int N, M, day = 0;
int dx[4] = {1, 0, -1 ,0};
int dy[4] = {0, 1, 0 ,-1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> M >> N;

  queue<pair<int, int>> q;

  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      cin >> board[i][j];
      if (board[i][j] == 1) {
        q.push({i, j}); 
      }
    }
  }

  while (true) {
    
    for (int i=0, q_size = q.size(); i<q_size; ++i) {
      pair<int, int> cur = q.front(); q.pop();

      for (int dir=0; dir<4; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if (board[nx][ny] != 0) continue;

        q.push({nx, ny});
        board[nx][ny] = 1;
      }
    }

    if (q.empty()) break;
    day++;
  }

  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      if (board[i][j] == 0) { cout << -1; return 0; }
    }
  }

  cout << day;

  return 0;
}