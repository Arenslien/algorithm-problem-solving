// Authored by: Arenslien
// BOJ: 1799 - 비숍

#include <iostream>

using namespace std;

int board[10][10];
int ans[2];
int N;
bool used_diagonal[19]; // 2*N - 1개의 우하향 대각선 0, 17, 18

// (x, y): x + y = 짝수인 경우 --> 대각선 N개
// (x, y): x + y = 홀수인 경우 --> 대각선 N-1개

void solve(int k, int cnt, int color) {
  // 1. Base Condition 
  if (k >= 2*N - 1) { 
    if (ans[color] < cnt) ans[color] = cnt;
    return;
  }

  // 2. Backtracking
  int start = (k < N ? 0:k-N+1);
  int end = (k < N ? k:N-1);

  for (int i=start; i<=end; ++i) {
    int idx = i-(k-i)+N-1; // 우하향 대각선 인덱스 값
    if (!board[i][k-i] || used_diagonal[idx]) continue;
    
    used_diagonal[idx] = true;
    solve(k+2, cnt+1, color);
    used_diagonal[idx] = false;
  }

  solve(k+2, cnt, color);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  for (int i=0; i<N; ++i)
  for (int j=0; j<N; ++j)
    cin >> board[i][j];

  solve(0, 0, 0);
  solve(1, 0, 1);

  cout << ans[0] + ans[1];

  return 0;
}


// bool diagonal1[19]; // 대각선 개수: 2N - 1 (N=10)
// bool diagonal2[19];
// int board[10][10];
// int N, mx = 0;

// void solve(int k) {
//   // 1. Base Condition
//   if (k == 2*N - 1) {
//     int cnt = 0;
//     for (int i=0; i<2*N-1; ++i) cnt += diagonal1[i];
//     if (mx < cnt) mx = cnt;
//     return;
//   }

//   // 2. Backtracking
//   // 각 대각선 별 칸 좌표
//   int start = (k < N ? 0:k-N+1); 
//   int end = (k < N ? k:N-1);
  
//   for (int i=start; i<=end; ++i) {
//     int idx = i-(k-i)+N-1; // 우하향 대각선 인덱스 값
    
//     if (!board[i][k-i] || diagonal2[idx]) continue;

//     diagonal1[k] = true;
//     diagonal2[idx] = true;
//     solve(k+1);
//     diagonal1[k] = false;
//     diagonal2[idx] = false;
//   }

//   solve(k+1);
// }


// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   cin >> N;

//   for (int i=0; i<N; ++i)
//   for (int j=0; j<N; ++j)
//     cin >> board[i][j];

//   solve(0);

//   cout << mx;

//   return 0;
// }