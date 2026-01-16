#include <iostream>

int main() {
  double a, b;

  std::cin >> a >> b;
  std::cout << a / b;

  return 0;
}

// #include <string>

// // std::string divide(int a, int b) {
// //   std::string result = "";

// //   // 1. 몫 더하기
// //   result += std::to_string(a / b);

// //   // 2. 나머지 확인
// //   if (a % b && cnt != 0) {
// //     result += ".";
// //     result += divide((a % b) * 2, b);
// //   }

// //   return result;
// // }
