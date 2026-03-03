// Authored by: Arenslien
// 재귀 함수 예제 연습

#include <iostream>

using namespace std;

void print_N(int N) {
  if (N <= 0) return;
  cout << N << " -> ";
  print_N(N-1);
}

int sum_N(int N) {
  if (N <= 0) return 0;
  return N + sum_N(N-1);
}

int main() {
  print_N(10);
  cout << '\n' << sum_N(15);

  return 0;
}