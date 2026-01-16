// 2752: 세수정렬

#include <iostream>

int main() {
  int max_num[3] = {0};

  std::cin >> max_num[0] >> max_num[1] >> max_num[2];

      for (int i = 0; i < 3 - 1; i++)
  {
    for (int j=0; j<3-i-1; j++) {
      if (max_num[j] > max_num[j+1]) {
        int temp = max_num[j];
        max_num[j] = max_num[j+1];
        max_num[j+1] = temp;
      }
    }
  }

  std::cout << max_num[0] << " " << max_num[1] << " " << max_num[2];;

  return 0;
}