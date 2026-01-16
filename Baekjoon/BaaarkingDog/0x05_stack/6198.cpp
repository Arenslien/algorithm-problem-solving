// Authored by: Arenslien
// BOJ: 6198 - 옥상 정원 꾸미기

#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N, cnt = 0;
  cin >> N;

  stack<int> s;
  s.push(1000000001);

  for (int i=0; i<N; ++i) {
    int h;
    cin >> h;

    while (s.top() <= h) s.pop();
    cnt += s.size()-1;
    s.push(h);
  }

  cout << cnt;

  return 0;
}