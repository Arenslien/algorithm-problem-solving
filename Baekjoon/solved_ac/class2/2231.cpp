// 2231: 분해합

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i=1; i<=N; i++) {
    int sum = i, index = i;
    while (index > 0) {
      sum += index % 10;
      index /= 10;
    }

    if (sum == N) {
      cout << i;
      break;
    }

    if (i == N) cout << 0;
  }

  return 0;
}