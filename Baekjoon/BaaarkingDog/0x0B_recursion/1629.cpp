// Authored by: Arenslien
// BOJ: 1629 - 곱셈

#include <iostream>

using namespace std;
using ll = long long;

// 1. 맨 처음 시도 --> 제출 전에 봐도 그냥 호출 개수 스택 넘어설 게 딱 보임..
// ll mod(ll A, ll B, ll C) {
//   if (B == 1) return A % C;
//   if (B & 1) return mod(A, B/2, C) * mod(A, B/2 + 1, C) % C;
//   else return mod(A, B/2, C) * mod(A, B/2, C) % C;
// }

// 2. 두 번째 시도 --> Barkingdog 코드 참고
ll mod(ll A, ll B, ll C) {
  if (B == 1) return A % C;
  
  ll num = mod(A, B/2, C);
  num = num * num % C;

  if (B & 1) return num * A % C;
  else return num;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll A, B, C;
  cin >> A >> B >> C;
  cout << mod(A, B, C);

  return 0;
}