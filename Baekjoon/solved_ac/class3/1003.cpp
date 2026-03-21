// Authored by: Arenslien
// BOJ: 1003 - 피보나치 함수

#include <iostream>
using namespace std;

int zero_cnt = 0, one_cnt = 0;
int T;

void fibonacci(int n) {
  // 1. Base Condition
  if (n == 0) {
    zero_cnt++;
    return;
  }
  if (n == 1) { 
    one_cnt++;
    return;
  }
  
  // 2. Recursion
  fibonacci(n-1);
  fibonacci(n-2);
}

void solve(int n) {
  zero_cnt = 0, one_cnt = 0;

  fibonacci(n);

  cout << zero_cnt << ' ' << one_cnt << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> T;
  while (T--) {
    int num; cin >> num;
    solve(num);
  }

  return 0;
}