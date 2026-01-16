// Authored by: Arenslien
// BOJ: 2231 - 분해합

#include <iostream>

using namespace std;

int get_generator(int x) {
  int sum = x;

  while (x > 0) {
    sum += x%10;
    x /= 10;
  }
  
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  for (int i=0; i<N; i++) {
    int generator = get_generator(i);
    if (generator == N) {
      cout << i;
      return 0;
    }
  }

  cout << 0;

  return 0;
}