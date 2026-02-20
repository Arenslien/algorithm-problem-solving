// Authored by: Arenslien
// BOJ: 1697 - 숨바꼭질

#include <iostream>
#include <queue>

using namespace std;

int dist[100005];
int N, K;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  for (int i=0; i<=100000; ++i) dist[i] = -1; // dist 배열 초기화

  cin >> N >> K; // N, K 입력

  queue<int> Q;
  Q.push(N);
  dist[N] = 0;

  while (!Q.empty()) {
    int cur_x = Q.front(); Q.pop();

    int nx[3] = {cur_x - 1, cur_x + 1, 2 * cur_x};
    for (int i=0; i<3; ++i) {
      if (nx[i] < 0 || nx[i] > 100000) continue; // 범위 벗어나면 pass
      if (dist[nx[i]] != -1) continue; // -1이 아니면(간 곳이면) pass

      dist[nx[i]] = dist[cur_x] + 1;
      Q.push(nx[i]);
    }
  }

  cout << dist[K];

  return 0;
}