// 1158: 요세푸스 문제

#include <iostream>
#include <queue>
using namespace std;

int main() {
  int N, K, cnt = 1;
  cin >> N >> K;
  
  queue<int> q;

  for (int i=0; i<N; i++) q.push(i+1);

  cout << '<';

  while (q.size() != 1) {
    int front = q.front();
    q.pop();
    if (cnt++ % K != 0) q.push(front);
    else cout << front << ", ";
  }

  cout << q.front() << '>';

  return 0;
}

// <-- 1 2 3 4 5 6 7 <--