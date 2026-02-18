// Authored by: Arenslien
// BOJ: 1966 - 프린터 큐

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T, N, M, rank;
  cin >> T;

  while (T--) {
    cin >> N >> M;

    queue<pair<int, int>> Q;
    vector<int> V;
    int cnt = 0;

    for (int i=0; i<N; i++) {
      cin >> rank;
      Q.push({rank, i});
      V.push_back(rank);
    }

    sort(V.begin(), V.end());
    
    while (true) {
      if (Q.front().first != V.back()) {
        pair<int, int> cur = Q.front();
        Q.push({cur.first, cur.second});
        Q.pop();
      }
      else if (Q.front().second != M) {
        V.pop_back();
        Q.pop();
        cnt++;
      }
      else {
        cout << cnt + 1 << '\n';
        break;
      }
    }
  }

  return 0;
}