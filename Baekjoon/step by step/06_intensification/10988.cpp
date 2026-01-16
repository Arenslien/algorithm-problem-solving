// 10988: 팰린드롬인지 확인하기

#include <iostream>
#include <string>

int main() {
  std::string word, front="", back="";
  std::cin >> word;

  // 홀수인 경우
  for (int i=0; i<int(word.length()/2); i++) {
    front += word.at(i);
    back += word.at(word.length()-1-i);
  }
  std::cout << (front == back);

  return 0;
}