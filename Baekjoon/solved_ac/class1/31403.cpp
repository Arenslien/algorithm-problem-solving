// 31403: A + B - C

#include <iostream>
#include <string>

int main() {
  std::string A, B, C;
  std::cin >> A >> B >> C;

  std::cout << std::stoi(A) + std::stoi(B) - std::stoi(C) << std::endl;
  std::cout << std::stoi(A + B) - std::stoi(C);

  return 0;
}