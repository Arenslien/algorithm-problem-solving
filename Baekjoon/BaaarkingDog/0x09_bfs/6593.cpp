// Authored by: Arenslien
// BOJ: 6593 - 상범 빌딩

#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct loc {
  int x, y, z;
};

string building[30][30];
int vis[30][30][30];
queue<loc> Q;

int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int L, R, C, e1, e2, e3;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  while (true) {
    // 1. L R C 입력
    cin >> L >> R >> C;
    
    if (L+R+C == 0) break; // 2. Escape Condition; 
    
    // 3. vis 초기화
    for (int i=0; i<L; ++i)
    for (int j=0; j<R; ++j)
    for (int k=0; k<C; ++k)
      vis[i][j][k] = -1;
    
    
    // 4. building 입력
    for (int i=0; i<L; ++i) {
      for (int j=0; j<R; ++j) {
        // 4.1 building 문자열 입력
        cin >> building[i][j];

        for (int k=0; k<C; ++k) {
          // 4.2 시작 위치 체크
          if (building[i][j][k] == 'S') {
            Q.push({i, j, k});
            vis[i][j][k] = 0; // true;
          }

          // 4.3 출구 위치 체크
          else if (building[i][j][k] == 'E') {
            e1 = i; e2 = j; e3 = k;
          }
        }
      }
    }

    // 5. BFS 시작
    while (!Q.empty()) {
      struct loc cur = Q.front(); Q.pop();

      for (int dir=0; dir<6; ++dir) {
        int nx = cur.x + dx[dir];
        int ny = cur.y + dy[dir];
        int nz = cur.z + dz[dir];

        if (nx < 0 || nx >= L || ny < 0 || ny >= R || nz < 0 || nz >= C) continue;
        if (building[nx][ny][nz] == '#' || vis[nx][ny][nz] != -1) continue;

        Q.push({nx, ny, nz});
        vis[nx][ny][nz] = vis[cur.x][cur.y][cur.z] + 1;
      }
    }

    if (vis[e1][e2][e3] != -1) cout << "Escaped in " << vis[e1][e2][e3] <<" minute(s).\n";
    else cout << "Trapped!\n";
  }

  return 0;
}