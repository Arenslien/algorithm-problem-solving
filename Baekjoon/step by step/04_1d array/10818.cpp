// 10818: 최소, 최대
#include <iostream>

int main() {
  int N, max = -1000000, min = 1000000;

  std::cin >> N;

  for (int i=0, num; i<N; i++) {
    std::cin >> num;

    if (num > max) max = num;
    if (num < min) min = num;
  }

  std::cout << min << " " << max;

  return 0;
}