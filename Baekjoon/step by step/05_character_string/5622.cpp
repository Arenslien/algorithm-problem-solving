// 5622: 다이얼

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  // 1. 다이얼 딕셔너리 설정
  std::unordered_map<char, int> dial_dict = {
    {'A', 3}, {'B', 3}, {'C', 3},
    {'D', 4}, {'E', 4}, {'F', 4},
    {'G', 5}, {'H', 5}, {'I', 5},
    {'J', 6}, {'K', 6}, {'L', 6},
    {'M', 7}, {'N', 7}, {'O', 7},
    {'P', 8}, {'Q', 8}, {'R', 8}, {'S', 8},
    {'T', 9}, {'U', 9}, {'V', 9},
    {'W', 10}, {'X', 10}, {'Y', 10}, {'Z', 10}
  };

  // 2. 문자열 입력
  std::string word;
  std::cin >> word;

  // 3. 최소 시간 계산
  int time = 0;
  for (char alphabet : word) {
    time = time + dial_dict[alphabet];
  }

  // 4. 결과 출력
  std::cout << time << std::endl;

  return 0;
}