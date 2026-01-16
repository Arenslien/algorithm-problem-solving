#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  stack<int> S;

  int K, sum = 0;
  cin >> K;
  
  while (K--) {
    int num;
    cin >> num;

    if (num != 0) S.push(num);
    else S.pop();
  }

  while (!S.empty()) {
    sum += S.top();
    S.pop();
  }

  cout << sum;

  return 0;
}