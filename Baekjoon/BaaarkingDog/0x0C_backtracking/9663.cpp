// Authored by: Arenslien
// BOJ: 9663 - N-Queen

#include <iostream>

using namespace std;

bool is_used_column[15]; // N
bool is_used_diagonal1[29]; // 우상향 x+y     2N-1
bool is_used_diagonal2[29]; // 우하향 x+y+N-1 2N-1
int N, cnt = 0;

void count_queen(int r) { // 현재 row
  // 1. Base Condition
  if (r == N) {
    cnt++;
    return;
  }

  // 2. Backtracking
  for (int c=0; c<N; ++c) {
    if (is_used_column[c]) continue;
    if (is_used_diagonal1[r+c]) continue;
    if (is_used_diagonal2[r-c+N-1]) continue;

    is_used_column[c] = true;
    is_used_diagonal1[r+c] = true;
    is_used_diagonal2[r-c+N-1] = true;
    count_queen(r+1);
    is_used_column[c] = false;
    is_used_diagonal1[r+c] = false;
    is_used_diagonal2[r-c+N-1] = false;
  }
  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;

  count_queen(0);

  cout << cnt;

  return 0;
}



// int board[15][15];
// int N, cnt = 0;

// int dx[4] = {1, -1, 1, -1};
// int dy[4] = {1, 1, -1, -1};

// void check(int x, int y, bool check) {
//   for (int i=0; i<N; ++i) {
//     board[x][i] = check;
//     board[i][y] = check;
//   }

//   for (int dir=0; dir<4; ++dir) {
//     int nx = x, ny = y;
//     while (true) {
//       nx = nx + dx[dir];
//       ny = ny + dy[dir];
//       cout << "nx, ny: " << nx << ' ' << ny << '\n';

//       if (nx < 0 || nx >= N || ny < 0 || ny >= N) break;
//       board[nx][ny] = check;
//     }
//   }
// }

// void count_queen(int k) {
//   // 1. Base Condition
//   if (k == N) {
//     cnt++;
//     return;
//   }

//   // 2. Backtracking
//   for (int i=0; i<N; ++i) {
//     for (int j=0; j<N; ++j) {
//       if (board[i][j]) continue;

//       check(i, j, true); // 
//       count_queen(k+1);
//       check(i, j, false); // 다른 퀸의 영역도 같이 false 해버림.
//     }
//   }


// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   cin >> N;

//   count_queen(0);

//   cout << cnt;

//   return 0;
// }