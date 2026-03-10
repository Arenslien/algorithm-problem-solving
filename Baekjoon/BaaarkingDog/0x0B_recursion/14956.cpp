// Authored by: Arenslien
// BOJ: 14956 - Philosopher;s Walk

#include <iostream>

using namespace std;

const int dx[4][4] = { // 0(right-turn), 1-2, 3(left-turn)
  {0, 1, 1, 0}, // RIGHT-TURN 
  {0, 0, 1, 1}, // UP
  {0, 0, 1, 1}, // UP
  {1, 0, 0, 1}, // LEFT-TURN
}; 
const int dy[4][4] = { // 0(right-turn), 1-2, 3(left-turn)
  {0, 0, 1, 1}, // RIGHT-TURN 
  {0, 1, 1, 0}, // UP
  {0, 1, 1, 0}, // UP
  {1, 1, 0, 0}, // LEFT-TURN
}; 
int N, M;

void find_philosopher(int r, int c, int N, int M, int D) {
  // 1. Base Condition;
  if (N == 2) {
    cout << r+dx[D][M-1]+1 << ' ' << c+dy[D][M-1]+1;
    return;
  }

  // 2. 분할 정복
  int n = N/2; // 2
  int dir = (M-1)/(n*n); 
  int m = M - dir*(n*n);

  find_philosopher(r+n*dx[1][dir], c+n*dy[1][dir], n, m, dir); // 2, 2, 2

  return;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N >> M;

  find_philosopher(0, 0, N, M, 1);

  return 0;
}