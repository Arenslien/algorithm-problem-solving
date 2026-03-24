// Authored by: Arenslien
// BOJ: 18809 - Gaaaaaaaaaarden

#include <algorithm> // next_permutation 사용
#include <iostream>
#include <utility> // pair 사용
#include <vector>

using namespace std;

int N, M, G, R, mx = 0;
int brute[10]; 
vector<pair<int, int>> soil; 

const int EMPTY = 0;
const int GREEN = 1;
const int RED = 2;
const int FLOWER = 3;

int bfs() {
  




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
  } while (next_permutation(brute, brute + G+R)); // {0, 0, 1, 1, 2} // 빈 땅 2, 초록 배양액 2, 빨간 배양액 1 

  cout << mx;

  return 0;
}
