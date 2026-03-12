// Authored by: Arenslien
// BOJ: 14956 - Philosopher;s Walk

#include <iostream>
#include <utility>

using namespace std;

#define X first
#define Y second
int n, m;

pair<int, int> philo(int n, int m) {
  // 1. Base Condition
  if (n == 2) {
    if (m == 0) return {1, 1};
    else if (m == 1) return {1, 2};
    else if (m == 2) return {2, 2};
    else return {2, 1};
  }
  
  // 2. 분할 정복
  int half = n/2;
  int section = half * half;
  int quadrant = m / section;
  int walk = m % section;

  pair<int, int> loc = philo(half, walk);

  if (quadrant == 0) return {loc.Y, loc.X};
  else if (quadrant == 1) return {loc.X, loc.Y + half};
  else if (quadrant == 2) return {loc.X + half, loc.Y + half};
  else return {2*half - loc.Y + 1, half - loc.X + 1};
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N M 입력
  cin >> n >> m;

  // 2. 현재 철학자 좌표 결과 출력
  pair<int, int> result = philo(n, m-1);
  cout << result.X << ' ' << result.Y;

  return 0;
}





















// const int dx[4][4] = { // 0(right-turn), 1-2, 3(left-turn)
//   {0, 1, 1, 0}, // RIGHT-TURN 
//   {0, 0, 1, 1}, // UP
//   {0, 0, 1, 1}, // UP
//   {1, 0, 0, 1}, // LEFT-TURN
// }; 
// const int dy[4][4] = { // 0(right-turn), 1-2, 3(left-turn)
//   {0, 0, 1, 1}, // RIGHT-TURN 
//   {0, 1, 1, 0}, // UP
//   {0, 1, 1, 0}, // UP
//   {1, 1, 0, 0}, // LEFT-TURN
// }; 
// int N, M;

// void find_philosopher(int r, int c, int N, int M, int D) {
//   // 1. Base Condition;
//   if (N == 2) {
//     cout << r+dx[D][M-1]+1 << ' ' << c+dy[D][M-1]+1;
//     return;
//   }

//   // 2. 분할 정복
//   int n = N/2; // 2
//   int dir = (M-1)/(n*n); 
//   int m = M - dir*(n*n);

//   find_philosopher(r+n*dx[1][dir], c+n*dy[1][dir], n, m, dir); // 2, 2, 2

//   return;
// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   cin >> N >> M;

//   find_philosopher(0, 0, N, M, 1);

//   return 0;
// }