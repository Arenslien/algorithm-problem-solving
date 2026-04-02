// Authored by: Arenslien
// BOJ: 12100 - 2048 (Easy)

#include <iostream>

using namespace std;

int direction[5];
bool is_merged[20][20];
int board[20][20]; // N: 최대값 20 
int copied[20][20];
int N, mx = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void move_block(int x, int y, int dir) {
  while (true) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (nx < 0 || nx >= N || ny < 0 || ny >= N) break;
    if (copied[nx][ny] == 0) {
      copied[nx][ny] = copied[x][y];
      copied[x][y] = 0;
    }
    else if (copied[nx][ny] == copied[x][y]) {
      copied[nx][ny] = copied[x][y] << 1;
      is_merged[nx][ny] = true;
    }
    else break;
  }
}

void solve() {
  // 1. 복사본 생성
  for (int i=0; i<N; ++i)
    for (int j=0; j<N; ++j)
      copied[i][j] = board[i][j];
  
  // 2. 방향에 맞게 움직이기
  for (int idx=0; idx<5; ++idx) { // direction[idx]로 사용
    for (int i=0; i<N; ++i)
      for (int j=0; j<N; ++j)
        is_merged[i][j] = false;
    
    for (int i=1; i<N; ++i) {
      for (int j=0; j<N; ++j) {
        // x, y 설정
        int x, y;
        if (direction[idx] == 0) { // 아래
          x = N-1-i;
          y = j;
        }
        else if (direction[idx] == 1) { // 오른쪽
          x = j;
          y = N-1-i;
        }
        else if (direction[idx] == 2) { // 위
          x = i;
          y = j;
        }
        else { // 왼쪽
          x = j;
          y = i;
        }
        move_block(x, y, direction[idx]);
      }
    }
  }

  // 3. 최대값 찾기
  for (int i=0; i<N; ++i) {
    for (int j=0; j<N; ++j) {
      if (mx < copied[i][j]) {
        mx = copied[i][j];
        cout << mx << '\n';
        for (int i=0; i<5; ++i) cout << direction[i] << ' ';
        cout << '\n';
      }
    }
  }
}



int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  for (int i=0; i<N; ++i)
    for (int j=0; j<N; ++j)
      cin >> board[i][j];

  for (int tmp=0; tmp<1024; ++tmp) {
    int brute = tmp;
    
    // 방향 결정: 00000 ~ 33333 (4진법)
    for (int i=0; i<5; ++i) {
      direction[i] = brute % 4;
      brute /= 4;
    }

    solve();
  }

  cout << mx;

  return 0;
}