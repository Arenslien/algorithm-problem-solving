// Authored by: Arenslien
// BOJ: 2493 - 탑

#include <iostream>
#include <stack>

using namespace std;

struct tower {
  int height, index;
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  stack<tower> s;

  for (int i=0; i<N; ++i) {
    struct tower t;
    cin >> t.height;
    t.index = i+1;
    
    while (!s.empty() && s.top().height < t.height) s.pop();

    if (s.empty()) cout << 0 << ' ';
    else if (s.top().height > t.height) cout << s.top().index << ' ';

    s.push(t);
  }

  return 0;
}

// Authored by : twinkite
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/44465623025e452bba5feb80b0b0e60e
// #include <bits/stdc++.h>
// using namespace std;
// #define X first
// #define Y second

// int N;
// stack<pair<int, int>> tower;

// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);

//   cin >> N;
//   tower.push({100000001, 0});
//   for (int i = 1; i <= N; i++)
//   {
//     int height;
//     cin >> height;
//     while (tower.top().X < height)
//       tower.pop();
//     cout << tower.top().Y << " ";
//     tower.push({height, i});
//   }
// }

// --> 맨 앞에 가장 큰 타워를 index 0으로 채워버림.