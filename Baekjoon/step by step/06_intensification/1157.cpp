// 1157: 단어 공부

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::string word;
  std::cin >> word;

  std::unordered_map<char, int> count;
  
  for (char &ch : word) {
    ch = std::toupper(ch);
    count[ch]++;
  }

  // 2. 최빈값 찾기
  int max_freq = 0;
  for (const auto &pair : count) {
    max_freq = std::max(max_freq, pair.second);
  }

  // 3. 최빈 문자 찾기
  char most_common = '?';
  int freq_count = 0;
  for (const auto &pair : count) {
    if (pair.second == max_freq) {
      if (freq_count == 0) {
        most_common = pair.first;
      } else {
        most_common = '?';
        break;
      }
      freq_count++;
    }
  }

  // 4. 출력
  std::cout << most_common;

  return 0;
}