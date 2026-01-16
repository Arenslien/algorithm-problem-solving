// 2566: 최댓값

#include <iostream>

int main() {
  int max_num=0, row_index=0, col_index=0;

  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      int input_num;
      std::cin >> input_num;

      if (max_num <= input_num) {
        max_num = input_num;
        row_index = i+1;
        col_index = j+1;
      }
    }
  }

  std::cout << max_num << std::endl << row_index << " " << col_index;

  return 0;
}