// Authored by : Arenslien
// BOJ : 14215번 - 세 막대

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int len[3] = {};
  cin >> len[0] >> len[1] >> len[2];

  sort(len, len+3);

  // 삼각형의 조건: 짧은 두 변의 길이의 합이 가장 긴 변의 길이보다 길어야 함 
  if (len[0]+len[1] > len[2]) cout << len[0]+len[1]+len[2];
  else cout << len[0]+len[1]+len[0]+len[1]-1;
  return 0;
}