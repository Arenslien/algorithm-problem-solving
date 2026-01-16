#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int X, i, cnt = 0;
  cin >> X;

  for (i=1; cnt+i < X; i++) cnt += i;
  int rest = X - cnt;
  
  if (i%2 == 0) cout << rest << '/' << i-rest+1;
  else cout << i-rest+1 << '/' << rest;

  return 0;
}