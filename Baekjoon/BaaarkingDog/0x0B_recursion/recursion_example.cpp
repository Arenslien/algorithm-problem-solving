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

// 0x01 연습 문제 1 - 거듭 제곱: a^b mod m
int mod(int a, int b, int m) { // 결과값 0: int overflow
  int num = 1;
  while (b--) num *= a;
  return num % m;
}

using ll = long long;
ll mod2(ll a, ll b, ll m) {
  ll num = 1;
  while (b--) num = num * a % m;
  return num;
}


int main() {
  print_N(10);
  cout << '\n' << sum_N(15) << '\n';

  cout << mod(6, 100, 5) << '\n';
  cout << mod2(6, 100, 5) << '\n';
  return 0;
}