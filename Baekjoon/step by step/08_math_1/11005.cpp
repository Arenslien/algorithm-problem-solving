// 11005: 진법 변환 2

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::unordered_map<int, std::string> digit_dict = {};
  for (int i=0; i<26; i++) {
    digit_dict[i+10] = char(i+65);
  }
  
  std::string base_B = "";
  
  int N, B;
  std::cin >> N >> B;

  while (N > 0) {
    base_B = (N%B >= 10 ? digit_dict[N%B] : std::to_string(N%B)) + base_B;
    N /= B;
  }

  std::cout << base_B;

  return 0;
}