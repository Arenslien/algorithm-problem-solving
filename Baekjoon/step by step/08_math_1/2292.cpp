// 2292: 벌집

#include <iostream>

int main() {
  int N, i = 1, current_room = 1;
  std::cin >> N;

  while (current_room < N) {
    current_room += 6 * i++;
  }

  std::cout << i;

  return 0;
}
