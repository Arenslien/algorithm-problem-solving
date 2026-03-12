// Authored by: Arenslien
// BOJ: 2468 - 안전 영역

#include <iostream>
#include <utility>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[100][100];
bool vis[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N, safe_area = 0;
queue<pair<int, int>> Q;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  // 1. N과 지역 입력
  cin >> N;
  for (int i=0; i<N; ++i)
  for (int j=0; j<N; ++j)
    cin >> board[i][j];

  // 2. 안전 영역 개수 카운팅 - BFS
  for (int rain=0; rain<=100; ++rain) { // rain --> 강수량
    // 2.1 안전 구역 및 방문 여부 초기화
    int area = 0;
    
    for (int x=0; x<N; ++x)
    for (int y=0; y<N; ++y)
      vis[x][y] = false;

    // 2.2 BFS
    for (int x=0; x<N; ++x) {   //  
      for (int y=0; y<N; ++y) { // 
        if (board[x][y] <= rain|| vis[x][y]) continue;

        Q.push({x, y});
        vis[x][y] = true;
        area++;

        while (!Q.empty()) {
          pair<int, int> cur = Q.front(); Q.pop();

          for (int dir=0; dir<4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (vis[nx][ny] || board[nx][ny] <= rain) continue;

            Q.push({nx, ny});
            vis[nx][ny] = true;
          }
        }
      }
    }
    if (safe_area < area) safe_area = area;
  }

  cout << safe_area;

  return 0;
}