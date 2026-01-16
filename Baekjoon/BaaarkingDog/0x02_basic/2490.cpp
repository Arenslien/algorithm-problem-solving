// 2490: 윷놀이

#include <iostream>

int main() {
  for (int i=0; i<3; i++) {
    int n1, n2, n3, n4, sum = 0;
    std::cin >> n1 >> n2 >> n3 >> n4;

    sum += n1 + n2 + n3 + n4;

    if (sum == 0) std::cout << 'D';
    else if (sum == 1) std::cout << 'C';
    else if (sum == 2) std::cout << 'B';
    else if (sum == 3) std::cout << 'A';
    else if (sum == 4) std::cout << 'E';
    std::cout << std::endl;
  }

  return 0;
}