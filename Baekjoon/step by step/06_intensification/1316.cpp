// 1316: 그룹 단어 체커

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  int group_cnt = 0, N = 0;
  std::cin >> N;

  for (int i=0; i<N; i++) {
    std::string word;
    std::cin >> word;

    std::unordered_map<char, bool> check_dict;
    bool is_group = true;

    
    for (int j=0; j<word.length(); j++) {
      if (check_dict.find(word.at(j)) == check_dict.end()) {
        check_dict[word.at(j)] = true;
        continue;
      }

      if (check_dict[word.at(j)] && word.at(j) != word.at(j-1)) {
        is_group = false;
        break;
      }      
    }

    group_cnt += is_group ? 1:0;
  }

  std::cout << group_cnt;

  return 0;
}