// 2941: 크로아티아 알파벳

#include <iostream>
#include <string>

int main() {
  std::string croatia_alphabet_array[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  std::string word;
  std::cin >> word;

  int cnt = 0;

  for (int i=0; i<word.length(); i++) {
    for (int j=0; j<8; j++) {
      if (word.substr(i, croatia_alphabet_array[j].length()) == croatia_alphabet_array[j]) {
        i += croatia_alphabet_array[j].length()-1;
        break;
      }
    }
    cnt++;
  }

  std::cout << cnt;

  return 0;
}