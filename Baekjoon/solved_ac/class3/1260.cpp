// Authored by: Arenslien
// BOJ: 1260 - DFS와 BFS

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

#define X first
#define Y second

bool graph[1001][1001];
bool vis[1001];
int N, M, V, n1, n2;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. N, M, V 입력 및 연결된 간선 정보
  cin >> N >> M >> V;

  for (int i=0; i<M; ++i) { // 간선 정보 입력
    cin >> n1 >> n2;

    graph[n1][n2] = true;
    graph[n2][n1] = true;
  }

  // 2. DFS 수행
  stack<int> S;
  S.push(V);

  while (!S.empty()) {
    int cur = S.top(); S.pop();

    if (vis[cur]) continue;

    vis[cur] = true;
    cout << cur << ' ';

    // 작은 번호부터 방문 위해 큰 번호부터 push
    for (int i=N; i>=1; --i) {
      if (graph[cur][i] && !vis[i]) {
        S.push(i);
      }
    }
  }

  cout << '\n';
  for (int i=1; i<=N; ++i) vis[i] = false;

  // 3. BFS 수행
  queue<int> Q;
  Q.push(V);
  vis[V] = true;
  cout << V << ' ';

  while (!Q.empty()) {
    int cur = Q.front(); Q.pop();

    for (int i=1; i<=N; ++i) {
      if (!graph[cur][i] || vis[i]) continue; 
      Q.push(i);
      vis[i] = true;
      cout << i << ' ';
    }
  }

  return 0;
}