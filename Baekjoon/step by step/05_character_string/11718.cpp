// 11718: 그대로 출력하기
#include <iostream>
#include <string>

int main() {
  std::string line;

  while (std::getline(std::cin, line)) {
    std::cout << line << std::endl;
  }

  return 0;
}