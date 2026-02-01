// Authored by: Arenslien
// BOJ: 22966 - 가장 쉬운 문제를 찾는 문제

#include <iostream>
#include <string>

using namespace std;

struct problem {
  string title;
  int level;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  problem easy_problem;
  easy_problem.level = 5; // 최대 난이도 4, 4+1

  while (N--) {
    problem p;
    cin >> p.title >> p.level;

    if (p.level < easy_problem.level) {
      easy_problem = p;
    }
  }

  cout << easy_problem.title;

  return 0;
}
