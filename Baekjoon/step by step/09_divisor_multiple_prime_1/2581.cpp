#include <iostream>

using namespace std;

bool is_prime(int x) {
  if (x < 2) return false;

  for (int i=2; i*i<=x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int M, N, sum = 0, min = 10001;
  cin >> M >> N;

  for (int i=M; i<=N; i++) {
    if (is_prime(i)) {
      sum += i;
      if (i < min) min = i;
    }
  }

  if (sum) cout << sum << '\n' << min;
  else cout << -1;

  return 0;
}