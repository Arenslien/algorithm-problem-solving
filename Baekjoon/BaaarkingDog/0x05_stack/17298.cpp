// Authored by: Arenslien
// BOJ: 17298 - 오큰수

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct node {
  int value, index;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> result(N, -1);

  stack<node> s;
  s.push({1000005, -1});

  for (int i=0; i<N; ++i) {
    int A;
    cin >> A;

    while (s.top().value < A) {
      result[s.top().index] = A;
      s.pop();
    }

    s.push({A, i});
  }

  for (int i=0; i<N; ++i) cout << result[i] << ' ';

  return 0;
}