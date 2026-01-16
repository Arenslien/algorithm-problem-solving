// 15829: Hashing

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const long long M = 1234567891;

long long my_pow(int n, int step) {
  long long value = 1;
  for (int i=0; i<step; i++) value = (value * n) % M;
  return value;
}

int main() {
  string input_str;
  int L;
  long long hash = 0;
  cin >> L >> input_str;

  for (int i=0; i<L; i++) hash = (hash + (input_str.at(i) - 'a' + 1) * my_pow(31, i)) % M;

  cout << hash;

  return 0;
}


// 입력 : 문자열(소문자), a=1, b=2 ... z=26
// abba --> 1221
// H --> abba --> 1221 --> % M
// 해시 충돌 방지
// 1 * 1^1 + 2 * 2^2 + ...
// r = 31, M = 1234567891