// Authored by: Arenslien
// BOJ: 1018 - 체스판 다시 칠하기

#include <iostream>
#include <string>

using namespace std;

const string wb_line[2] = {"WBWBWBWB", "BWBWBWBW"};

int get_recolor_cnt(const string* board, int x, int y) {
  int cnt = 0;

  for (int i=0; i<8; i++) {    
    for (int j=0; j<8; j++) {
      if (wb_line[i%2][j] != board[x+i][y+j]) cnt++;
    }
  }

  return min(cnt, 64-cnt);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, result = 64;
  cin >> N >> M;

  string board[N] = {};

  for (int i=0; i<N; i++) cin >> board[i];

  for (int i=0; i<N-7; i++) { // N-8+1
    for (int j=0; j<M-7; j++) {
      int cnt = get_recolor_cnt(board, i, j);
      
      if (cnt < result) result = cnt;
    }
  }

  cout << result;

  return 0;
}
