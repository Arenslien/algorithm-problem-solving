// Authored by : Arenslien
// BOJ : 15894번 - 수학은 체육과목 입니다.

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long N;
  cin >> N;

  // 한 층 늘어날 때마다 늘어나는 둘레 길이
  // 1(양 옆 반절) + 2(양 옆 세로 테두리) + i(맨 밑 바닥 테두리) - (i-1): 기존 바닥 테두리
  // 1 + 2 + i - (i-1) = 4
  cout << N*4;

  return 0;
}