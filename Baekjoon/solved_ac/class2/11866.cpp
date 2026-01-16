#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K, cnt = 0;
  cin >> N >> K;

  queue<int> Q;

  for (int i=1; i<=N; i++) Q.push(i);
  
  cout << "<";

  while (!Q.empty()) {
    if (++cnt % K == 0) cout << Q.front() << (Q.size() != 1 ? ", ": "");
    else Q.push(Q.front());
    Q.pop();
  }

  cout << ">";

  return 0;
}
