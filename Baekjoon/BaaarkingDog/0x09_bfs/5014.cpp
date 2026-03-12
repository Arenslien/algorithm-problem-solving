// Authored by: Arenslien
// BOJ: 5014 - 스타트링크

#include <iostream>
#include <queue>

using namespace std;

int startlink[1000000];
int F, S, G, dx[2];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. 입력 및 배열 초기화
  cin >> F >> S >> G >> dx[0] >> dx[1];
  for (int i=0; i<F; ++i) startlink[i] = -1;

  // 2. BFS
  queue<int> Q;
  Q.push(S-1);
  startlink[S-1] = 0;

  while (!Q.empty()) {
    int cur = Q.front(); Q.pop();

    for (int dir=0; dir<2; ++dir) {
      int nx;
      if (dir == 0) nx = cur + dx[dir]; 
      else nx = cur - dx[dir];

      if (nx < 0 || nx >= F) continue;
      if (startlink[nx] != -1) continue;

      Q.push(nx);
      startlink[nx] = startlink[cur] + 1;
    }
  }

  // for (int i=0; i<F; ++i) cout << startlink[i] << ' ';
  // cout << '\n';

  if (startlink[G-1] == -1) cout << "use the stairs";
  else cout << startlink[G-1];

  return 0;
}