// 2908: 상수

// #include <iostream>
// #include <string>

// int main() {
//   // 1. 두 수 입력
//   std::string input_a, input_b;
//   std::string A = "", B = "";

//   std::cin >> input_a >> input_b;

//   // 2. 두 수 거꾸로 뒤집기
//   for (int i=0; i<3; i++) {
//     A += input_a.at(2-i);
//     B += input_b.at(2-i);
//   }

//   // 3. 두 수 비교 후 결과 출력
//   if (std::stoi(A) > std::stoi(B)) {
//     std::cout << A;
//   } else {
//     std::cout << B;
//   }
//   return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string A, B;
  std::cin >> A >> B;

  std::reverse(A.begin(), A.end());
  std::reverse(B.begin(), B.end());

  std::cout << (std::stoi(A) > std::stoi(B) ? A:B);

  return 0;
}