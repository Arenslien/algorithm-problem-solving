#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  queue<int> Q;
  for (int i=0; i<N; i++) Q.push(i+1);

  while (Q.size() > 1) {
    Q.pop();
    Q.push(Q.front());
    Q.pop();
  }

  cout << Q.front();

  return 0;
}