#include <iostream>
using namespace std;

int main() {
  int dice[3] = {0, };
  int reward, same_cnt = 0, max = 0, same;

  cin >> dice[0] >> dice[1] >> dice[2];

  for (int i=0; i<3; i++) {
    if (max < dice[i]) max = dice[i];
    if (dice[i] == dice[(i+1)%3]) same = dice[i];
    if (dice[i] == dice[(i+1)%3]) same_cnt++;
  }

  if (same_cnt == 0) reward = max * 100;
  else if (same_cnt == 1) reward = 1000 + same * 100;
  else reward = 10000 + max * 1000;

  cout << reward;

  return 0;
}