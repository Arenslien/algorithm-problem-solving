// 1978: 소수 찾기

#include <iostream>
using namespace std;

int main() {
  int N, prime=0;
  cin >> N;

  while (N--) {
    int num, cnt=0;
    cin >> num;

    for (int i=1; i<=num; i++) {
      if (num % i == 0) cnt++;
      if (cnt > 2) break;
    }

    if (cnt == 2) prime++;
  }
  cout << prime;

  return 0;
}

