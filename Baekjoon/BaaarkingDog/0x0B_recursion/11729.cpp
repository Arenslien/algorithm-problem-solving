// Authored by: Arenslien
// BOJ: 11729 - 하노이 탑 이동 순서

#include <iostream>

using namespace std;

int N, cnt = 0;

void count_hanoi(int N, int start, int medium, int end) {
  if (N > 1) count_hanoi(N-1, start, end, medium); // N-1개를 end를 거쳐서 medium로 옮김
  cnt++;
  if (N > 1) count_hanoi(N-1, medium, start, end); // medium을 start를 거쳐서 end로 옮김  
}

void print_hanoi(int N, int start, int medium, int end) {
  if (N > 1) print_hanoi(N-1, start, end, medium); // N-1개를 end를 거쳐서 medium로 옮김
  cout << start << ' ' << end << '\n'; // start를 end로 옮김
  if (N > 1) print_hanoi(N-1, medium, start, end); // medium을 start를 거쳐서 end로 옮김
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> N;
  
  count_hanoi(N, 1, 2, 3);
  cout << cnt << '\n';
  print_hanoi(N, 1, 2, 3);

  return 0;
}

