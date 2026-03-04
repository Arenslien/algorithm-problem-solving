// Authored by: Arenslien
// BOJ: 2667 - 단지번호붙이기

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[25][25];
bool vis[25][25];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N, cnt = 0;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  vector<int> arr;
  // 0. N & 지도 입력
  cin >> N;
  for (int i=0; i<N; ++i) {
    string row;
    cin >> row;

    for (int j=0; j<N; ++j) {
      board[i][j] = row[j]-'0';
    }
  }

  // 1. 단지 BFS
  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (!board[i][j] || vis[i][j]) continue;

      queue<pair<int, int>> Q;
      int size = 1;
      cnt++;
      vis[i][j] = true;
      Q.push({i, j});

      while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir=0; dir<4; ++dir) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
          if (!board[nx][ny] || vis[nx][ny]) continue;

          Q.push({nx, ny});
          vis[nx][ny] = true;
          size++;
        }
      }

      arr.push_back(size);
    }
  }

  // 2. 정답 출력
  cout << cnt << '\n';
  
  sort(arr.begin(), arr.end());
  for (int num : arr) {
    cout << num << '\n';
  }





  return 0;
}