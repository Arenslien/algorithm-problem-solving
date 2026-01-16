// 11050: 이항 계수 1

#include <iostream>
using namespace std;

int factorial(int n) {
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}

int main() {
  int N, K;
  cin >> N >> K;

  int n_fac = factorial(N), n_k_fac = factorial(N-K), k_fac = factorial(K);

  cout << n_fac / (n_k_fac * k_fac);

  return 0;
}