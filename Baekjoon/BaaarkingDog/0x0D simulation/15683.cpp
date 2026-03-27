// Authored by: Arenslien
// BOJ: 15683 - 감시

#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

#define X first
#define Y second

vector<pair<int, int>> CCTVs;
int office[8][8];
bool vis[8][8];
int N, M, ans = 65;
int dir_idx[6] = {0, 4, 2, 4, 4, 1};
int dir[8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void monitor(int k, int dir) {
  queue<pair<int, int>> Q;
  int cx = CCTVs[k].X;
  int cy = CCTVs[k].Y;

  Q.push({cx, cy});
  vis[cx][cy] = true;

  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();
    
    int nx = cur.X + dx[dir];
    int ny = cur.Y + dy[dir];

    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
    if (office[nx][ny] == 6) continue;

    Q.push({nx, ny});
    vis[nx][ny] = true;
  }
}

void solve(int k) { // k 번째 CCTV 방향 설정 완료
  // 1. Base Condition
  if (k == CCTVs.size()) {
    for (int i=0; i<N; ++i)
    for (int j=0; j<M; ++j)
      vis[i][j] = false;

    for (int i=0; i<CCTVs.size(); ++i) {
      switch (office[CCTVs[i].X][CCTVs[i].Y]) {
        case 1:
          monitor(i, dir[i]);
          break;
        case 2:
          monitor(i, dir[i]);
          monitor(i, dir[i]+2);
          break;
        case 3:
          monitor(i, dir[i]);
          monitor(i, (dir[i]+1)%4);
          break;
        case 4:
          monitor(i, dir[i]);
          monitor(i, (dir[i]+1)%4);
          monitor(i, (dir[i]+2)%4);
          break;
        case 5:
          monitor(i, 0);
          monitor(i, 1);
          monitor(i, 2);
          monitor(i, 3);
          break;
      }
    }

    int cnt = 0;

    for (int i=0; i<N; ++i)
    for (int j=0; j<M; ++j)
      cnt += (office[i][j] == 0 && !vis[i][j]);

    if (ans > cnt) ans = cnt;
    return;
  }

  // 2. Backtracking: k 번째 CCTV 종류에 맞게 방향 설정
  int cx = CCTVs[k].X;
  int cy = CCTVs[k].Y;

  for (int i=0; i<dir_idx[office[cx][cy]]; ++i) {
    dir[k] = i;
    solve(k+1);
    dir[k] = 0; // 굳이 필요한가. 어차피 덮어쓰이지 않나.
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      cin >> office[i][j];

      if (1 <= office[i][j] && office[i][j] <= 5) CCTVs.push_back({i, j});
    }
  }

  solve(0);

  cout << ans;

  return 0;
}