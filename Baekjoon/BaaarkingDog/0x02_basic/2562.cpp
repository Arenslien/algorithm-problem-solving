#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int max = 0, index = 0;

  for (int i=0; i<9; i++) {
    int num;
    cin >> num;
    if (num > max) { max = num; index=i+1; }
  }

  cout << max << '\n' << index;

  return 0;
}