// 2920: 음계

#include <iostream>
#include <string>

int main() {
  int chords[8];
  for (int i=0; i<8; i++)
    std::cin >> chords[i];

  std::string result = chords[0] < chords[1] ? "ascending":"descending";

  for (int i=1; i<8; i++) {
    result = (result == "ascending" && chords[i-1] > chords[i]) or (result == "descending" && chords[i-1] < chords[i]) ? "mixed":result;
  }

  std::cout << result;

  return 0;
}