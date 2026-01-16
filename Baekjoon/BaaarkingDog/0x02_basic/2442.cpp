// 2442: 별 찍기 - 5

#include <iostream>

int main() {
  int N;
  std::cin >> N;

  for (int i=0; i<N; i++) {
    for (int j=0; j<N-i-1; j++) std::cout << ' ';
    for (int j=0; j<i*2 + 1; j++) std::cout << "*";
    std::cout << '\n';
  }

  return 0;
}