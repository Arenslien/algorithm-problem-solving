// 2446: 별 찍기 - 9

#include <iostream>

int main() {
  int N, step = 1;
  std::cin >> N;

  for (int i=0; i>-1; i+=step) {
    if (i == N-1) step = -1;

    // 좌측 공백
    for (int j=0;j<i; j++) std::cout << ' ';
    // 중앙 별
    for (int j=0; j<(N-i)*2 - 1; j++) std::cout << '*';

    std::cout << '\n';
  }

  return 0;
}