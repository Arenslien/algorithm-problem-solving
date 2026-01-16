// 2444.cpp

#include <iostream>

int main() {
  int N, step=1;
  std::cin >> N;

  if (N == 1) {
    std::cout << "*";
    return 0;
  }

  for (int i=0; i>-1; i+=step) {
    // 1. 공백 출력
    for (int j=0; j<N-i-1; j++) std::cout << " ";

    // 2. 별 출력
    std::cout << "*";
    for (int j=0; j<i*2; j++) std::cout << "*";
    
    if (!(i == 0 && step == -1)) std::cout << std::endl;

    if (i == N-1) step = -1; 
  }

  return 0;
}