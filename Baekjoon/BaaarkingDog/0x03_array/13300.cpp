#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K, cnt = 0, student[12] = {}; // 여자 앞, 남자 뒤

  cin >> N >> K;

  while (N--) {
    int S, Y;
    cin >> S >> Y;
    student[S*6 + Y - 1]++;
  }

  for (int i=0; i<12; i++) cnt += (student[i]/K + (student[i]%K ? 1:0));

  cout << cnt;

  return 0;
}