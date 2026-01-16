// 2576: 홀수

#include <iostream>

int main() {
  int min = 100, sum = 0;

  for (int i=0; i<7; i++) {
    int num;
    std::cin >> num;

    if (num % 2) {
      sum += num;
      if (min > num) min = num;
    }
  }

  if (sum) std::cout << sum << std::endl << min;
  else std::cout << -1;

  return 0;
}