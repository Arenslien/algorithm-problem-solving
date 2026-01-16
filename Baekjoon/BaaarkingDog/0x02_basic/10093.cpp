//10093: 숫자

#include <iostream>

int main() {
  long long A, B;
  std::cin >> A >> B;
  if (A == B) {
    std::cout << 0;
    return 0;
  }

  std::cout << (B > A ? B-A:A-B) - 1 << "\n";

  for (long long i=(B > A ? A:B)+1; i<(B > A ? B:A); i++) {
    std::cout << i << " ";
  }

  return 0;
}
