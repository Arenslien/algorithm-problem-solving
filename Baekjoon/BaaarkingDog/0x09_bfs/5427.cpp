// Authored by: Arenslien
// BOJ: 5427 - 불

#include <iostream>
#include <utility>
#include <string>
#include <queue>

using namespace std;

#define X first
#define Y second

string board[1000];
int fire[1000][1000];
int sang[1000][1000];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int t, w, h, sx, sy;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 0. 테스트 케이스 입력
  cin >> t;

  // 0. 개별 테스트 케이스 시작
  while (t--) {
    // 1. 너비, 높이 입력 
    cin >> w >> h;
    
    queue<pair<int, int>> Q;
    bool is_success = false;

    // 2. 불, 상근 방문 거리 배열 -1 초기화
    for (int i=0; i<h; ++i) {
      for (int j=0; j<w; ++j) {
        fire[i][j] = -1;
        sang[i][j] = -1;
      }
    }

    // 3. 빌딩 지도 입력
    for (int i=0; i<h; ++i) { // 높이
      cin >> board[i];

      for (int j=0; j<w; ++j) { // 너비
        // 3.1 불 위치 체크
        if (board[i][j] == '*') { Q.push({i, j}); fire[i][j] = 0; }

        // 3.2 상근 위치 체크
        if (board[i][j] == '@') { sx = i; sy = j; sang[i][j] = 0; }
      }
    }

    // 4. 불 - BFS
    while (!Q.empty()) {
      pair<int, int> cur = Q.front(); Q.pop();

      for (int dir=0; dir<4; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
        
        Q.push({nx, ny});
        fire[nx][ny] = fire[cur.X][cur.Y] + 1;
      }
    }

    // 5. 상근 - BFS
    Q.push({sx, sy});
    sang[sx][sy] = 0;

    while (!Q.empty() && !is_success) {
      pair<int, int> cur = Q.front(); Q.pop();

      for (int dir=0; dir<4; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          cout << sang[cur.X][cur.Y] + 1 << '\n';
          is_success = true;
          break;
        }
        if (sang[nx][ny] >= 0 || board[nx][ny] == '#') continue;
        if (fire[nx][ny] != -1 && sang[cur.X][cur.Y] + 1 >= fire[nx][ny]) continue;

        Q.push({nx, ny});
        sang[nx][ny] = sang[cur.X][cur.Y] + 1;
      }
    }

    if (!is_success) cout << "IMPOSSIBLE" << '\n';
  }

  return 0;
}