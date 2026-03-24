// Authored by: Arenslien
// BOJ: 18809 - Gaaaaaaaaaarden

#include <algorithm> // next_permutation 사용
#include <iostream>
#include <utility> // pair 사용
#include <vector>
#include <queue>
using namespace std;

#define X first
#define Y second

int N, M, G, R, mx = 0;
int brute[10]; 
vector<pair<int, int>> soil; 
int board[50][50];

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const int EMPTY = 0;
const int GREEN = 1;
const int RED = 2;
const int FLOWER = 3;

int bfs() {
  pair<int, int> state[50][50]; // X: 배양액 종류, Y: 시간을 저장
  queue<pair<int, int>> Q;
  int cnt = 0;

  // 1. 배양액 가능한 땅 체크
  for (int i=0; i<soil.size(); ++i) {
    if (brute[i]) { // G or R 배양액 확정 땅 체크 
      Q.push({soil[i].X, soil[i].Y}); // 해당 좌표 큐에 추가
      state[soil[i].X][soil[i].Y] = {brute[i], 0}; // 해당 좌표 배양액 상태 반영 
    }
  }

  // 2. BFS
  while (!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();

    int cur_state = state[cur.X][cur.Y].X;
    int cur_time = state[cur.X][cur.Y].Y;

    if (cur_state == FLOWER) continue;

    for (int dir=0; dir<4; ++dir) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];

      if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue; // 화단 밖 패스
      if (!board[nx][ny]) continue; // 호수 패스
      if (state[nx][ny].X == EMPTY) {
        state[nx][ny] = {cur_state, cur_time + 1};
        Q.push({nx, ny});
      }
      else if (state[nx][ny].X == RED) {
        if (cur_state == GREEN && cur_time+1 == state[nx][ny].Y) {
          state[nx][ny].X = FLOWER;
          cnt++;
        }
      }
      else if (state[nx][ny].X == GREEN) {
        if (cur_state == RED && cur_time+1 == state[nx][ny].Y) {
          state[nx][ny].X = FLOWER;
          cnt++;
        }
      }
    }
  }

  return cnt;
}


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  // 1. N, M, G, R & 화단 정보 입력
  cin >> N >> M >> G >> R;
  for (int i=0; i<N; ++i) {
    for (int j=0; j<M; ++j) {
      cin >> board[i][j];
      if (board[i][j] == 2) {
        soil.push_back({i, j}); // 배양 땅 위치 추가 
      }
    }
  }

  // 2. brute 땅 초기화
  for (int i=soil.size()-G-R; i<soil.size()-R; ++i) brute[i] = GREEN;
  for (int i=soil.size()-R; i<soil.size(); ++i) brute[i] = RED;

  // 3. BFS -> next_permutation으로 배양 토지 백트래킹 
  do {
    int flower = bfs();
    if (mx < flower) mx = flower;
  } while (next_permutation(brute, brute + soil.size())); // {0, 0, 1, 1, 2} // 빈 땅 2, 초록 배양액 2, 빨간 배양액 1 

  cout << mx;

  return 0;
}
