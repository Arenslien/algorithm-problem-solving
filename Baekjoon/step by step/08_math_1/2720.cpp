// 2720: 세탁소 사장 동혁

#include <iostream>

int main() {
  int cents[4] = { 25, 10, 5, 1 };
  int T;
  std::cin >> T;

  while (T--) {
    int C;
    std::cin >> C;

    for (int cent : cents) {
      std::cout << C/cent << " ";
      C %= cent;
    }
    std::cout << std::endl;
  }

  return 0;
}