// Authored by: Arenslien
// BOJ: 2493 - 탑

#include <iostream>
#include <stack>

using namespace std;

struct tower {
  int height, index;
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  stack<tower> s;

  for (int i=0; i<N; ++i) {
    struct tower t;
    cin >> t.height;
    t.index = i+1;
    
    while (!s.empty() && s.top().height < t.height) s.pop();

    if (s.empty()) cout << 0 << ' ';
    else if (s.top().height > t.height) cout << s.top().index << ' ';

    s.push(t);
  }

  return 0;
}