#include <iostream> // 아니 이것도 큰 수 연산임..

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, fac = 1;
  cin >> N;

  for (int i=1; i<=N; i++) fac *= i;
  cout << fac;

  return 0;
}