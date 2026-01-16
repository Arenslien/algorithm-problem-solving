#include <iostream>
#include <string>

int main() {
  std::string S;
  std::cin >> S;
  int alphabet_array[26] = {0};

  for (char ch : S) {
    alphabet_array[ch - 'a']++;
  }

  for (int alphabet_count : alphabet_array) {
    std::cout << alphabet_count << " ";
  }

  return 0;
}