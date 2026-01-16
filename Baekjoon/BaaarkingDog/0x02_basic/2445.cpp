// 2445: 별 찍기 - 8

#include <iostream>

int main() {
  int N, step = 1;
  std::cin >> N;

  for (int i=1; i>0; i+=step) {
    if (i == N) step = -1;

    // 좌측 별
    for (int j=0; j<i; j++) std::cout << '*';
    // 중앙 공백
    for (int j=0; j<(N-i)*2; j++) std::cout << ' ';
    // 우측 별
    for (int j=0; j<i; j++) std::cout << '*';

    std::cout << '\n';
  }

  return 0;
}
