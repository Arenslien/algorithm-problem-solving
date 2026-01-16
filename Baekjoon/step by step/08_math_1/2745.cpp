// 2745: 진법 변환

#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath>
#include <cctype>

int main() {
  int base_N, base_10 = 0; // 
  std::string N;
  
  std::unordered_map<char, int> digit_dict = {};
  for (int i=0; i<26; i++) {
    digit_dict[char(i+65)] = i+10;
  }
  
  std::cin >> N >> base_N;

  for (int i=0; i<N.length(); i++) {
    int digit_value = isdigit(N.at(i)) ? N.at(i) - '0' : digit_dict[N.at(i)];
    base_10 += pow(base_N, N.length() - i - 1) * digit_value;
  }

  std::cout << base_10;

  return 0;
}
