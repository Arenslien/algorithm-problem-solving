// Authored by: Arenslien
// BOJ: 1021 - 회전하는 큐

#include <iostream>
#include <deque>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, M, cnt = 0;
  cin >> N >> M;

  deque<int> DQ;
  
  for (int i=1; i<=N; ++i) DQ.push_back(i);

  while (M--) {
    int index;
    cin >> index;

    while (DQ.front() != index) {
      // 왼쪽 or 오른쪽 회전을 통해 front() 값에 index가 오게 함.
      if (abs(index - DQ.front()) < abs(index - DQ.back())) {
        DQ.push_back(DQ.front());
        DQ.pop_front();
        cout << "B" << '\n';
      } else {
        DQ.push_front(DQ.back());
        DQ.pop_back();
        cout << "F" << '\n';
      }

      cnt++;
      cout << cnt << '\n';
    }

    // DQ.front() == index 상태 이므로 원소 삭제
    DQ.pop_front();
  }

  cout << cnt;

  return 0;
}