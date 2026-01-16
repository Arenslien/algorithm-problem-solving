// 3033: 킹, 퀸, 룩, 비숍, 나이트, 폰

#include <iostream>

int main() {
  int chess_piece_cnt[6] = {1, 1, 2, 2, 2, 8};
  int input_cnt[6];

  for (int i=0; i<6; i++) {
    std::cin >> input_cnt[i];
    std::cout << chess_piece_cnt[i] - input_cnt[i] << " ";
  }

  return 0;
}