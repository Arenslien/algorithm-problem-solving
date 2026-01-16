// 2903: 중앙 이동 알고리즘

#include <iostream>

int main() {
  int N, current_point=2;
  std::cin >> N;

  while (N--) {
    current_point += current_point-1;
  }

  std::cout << current_point * current_point;

  return 0;
}