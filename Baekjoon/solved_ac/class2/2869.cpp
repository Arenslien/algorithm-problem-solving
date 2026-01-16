// 2869: 달팽이는 올라가고 싶다

#include <iostream>
using namespace std;

int main() {
  int A, B, V;
  cin >> A >> B >> V;

  int cnt = (V-A) / (A-B);
  if ((V-A) % (A-B) == 0) cnt++;
  else cnt += 2;

  cout << cnt;

  return 0;
}