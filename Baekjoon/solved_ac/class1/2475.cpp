// 2475: 검증수

#include <iostream>

int main() {
  int number, number_sum = 0;

  for (int i=0; i<5; i++) {
    std::cin >> number;
    number_sum += number * number;
  }

  std::cout << number_sum % 10;

  return 0;
}