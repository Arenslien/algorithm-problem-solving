// Authored by : Arenslien
// BOJ : 24267번 - 알고리즘 수업 - 알고리즘 수행 시간 6

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 첫 번째 풀이
  // long long n, cnt = 0;
  // cin >> n;

  // for (long long i = 1; i <= n - 2; i++)
  // {
  //   cnt += i * (i + 1) / 2;
  // }
  // cout << cnt << '\n' << 3;

  // 두 번째 풀이 --> nCr: 조합 개념

  long long n;
  cin >> n;

  // cout << factorial(n)/factorial(3)*(factorial(n-3));
  cout << n*(n-1)*(n-2)/6 << '\n' << 3;

  // 세 번째 풀이 --> 삼각뿔의 부피: n에 들어갈 값이 n-2임.
  // i: 1~n-2, j:i+1~n-1, k:j+1~n 이므로 출력값이 최종적으로 nCr과 동일
  // cout << n*(n+1)*(n+2)/6 << '\n' << 3;

  return 0;
}
