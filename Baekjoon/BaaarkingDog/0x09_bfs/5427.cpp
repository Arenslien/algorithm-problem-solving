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

int t, w, h;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> t;
  while (t--) {
    cin >> w >> h;
    
    queue<pair<int, int>> Q;
    int sx, sy;
    string result = "IMPOSSIBLE";

    // 0. fire, sang 초기화
    for (int i=0; i<1000; ++i) {
      for (int j=0; j<1000; ++j) {
        fire[i][j] = -1;
        sang[i][j] = -1;
      }
    }


    // 1. 지도 입력
    for (int i=0; i<h; ++i) { // 높이
      cin >> board[i];
      for (int j=0; j<w; ++j) { // 너비
        if (board[i][j] == '*') { 
          Q.push({i, j});
          fire[i][j] = 0;
        }
        if (board[i][j] == '@') { sx = i; sy = j; sang[i][j] = 0; }
      }
    }

    // 2. 불 - BFS
    while (!Q.empty()) {
      pair<int, int> cur = Q.front(); Q.pop();

      for (int dir=0; dir<4; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if (board[nx][ny] == '#') continue;
        
        Q.push({nx, ny});
        fire[nx][ny] = fire[cur.X][cur.Y] + 1;
      }
    }

    // 3. 상근 - BFS
    while (!Q.empty()) {
      pair<int, int> cur = Q.front(); Q.pop();

      for (int dir=0; dir<4; ++dir) {
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
          result = (sang[cur.X][cur.Y] + 1);
        }
        if (result != "IMPOSSIBLE" || board[nx][ny] == '#' || sang[cur.X][cur.Y] + 1 >= fire[nx][ny]) continue;

        Q.push({nx, ny});
        sang[nx][ny] = sang[cur.X][cur.Y] + 1;
      }
    }

    cout << result << '\n';
  }

  return 0;
}