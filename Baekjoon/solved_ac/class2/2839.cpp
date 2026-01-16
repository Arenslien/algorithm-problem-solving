// Authored by: Arenslien
// BOJ: 2839 - 설탕 배달

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, max = 5000;
  cin >> N; 

  for (int i=0; i<=N/5; ++i) {
    for (int j=0; j<=N/3; ++j) {
      if (5*i + 3*j == N && i+j < max) max = i+j;
    }
  }

  cout << (max == 5000 ? -1: max);

  return 0;
}

// 5x + 3y = N

// y = 0
// x = 0
// 18 = 15 + 3 3 1
// 18 = 10 + 8 2 2
// 18 = 5 + 13 1

// 19 = 15 + 4
// 19 = 10 + 9