// Authored by: Arenslien
// BOJ: 17298 - 오큰수

#include <iostream>
#include <stack>

using namespace std;

struct node {
  int value, index;
};

// 4
// 3 5 2 7

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  stack<node> s;

  s.push({1000001, -1}); // sentinel의 사전적 의미: '파수꾼' '보초' '감시자'
                         // 스택이 비었는지 확인하는 대신
                         // 항상 이 값이 top에 있도록 하여
                         // 비교 연산을 단순화

  for (int i=0; i<N; ++i) {
    int num;
    cin >> num;

    while (s.top().value < num) s.pop();

    if () {}




  }

  return 0;
}

// 4
// 3 3 7 2
// 7 7 -1 -1
// MAX < 3 - F



// 4
// 3 5 2 7
// 5 7 7 -1