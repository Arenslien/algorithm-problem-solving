#include <iostream>
#include <string>

// int main() {
//   int plastic_num[10] = {0};
//   int max = 0;

//   std::string N;
//   std::cin >> N;

//   for (char ch : N) {
//     if (ch == '6' || ch == '9') {
//       plastic_num[plastic_num[6] < plastic_num[9] ? 6:9]++;
//     }
//     else {
//       plastic_num[ch - '0']++;
//     }
//   }

//   for (int num : plastic_num) {
//     if (max < num) {
//       max = num;
//     }
//   }

//   std::cout << max;
  
//   return 0;
// }

int main() {
  int plastic_num[10] = {0};
  int max = 0;

  std::string N;
  std::cin >> N;

  for (char ch : N) {
    plastic_num[(ch == '6' || ch == '9') ? 6 : ch-'0']++;
  }

  plastic_num[6] = (plastic_num[6] + 1) / 2;

  for (int num : plastic_num) {
    if (max < num) {
      max = num;
    }
  }

  std::cout << max;
  
  return 0;
}