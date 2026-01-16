#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
  int x, y;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<Point> v;
  
  while (N--) {
    struct Point p;
    cin >> p.x >> p.y;
    v.push_back(p);
  }

  sort(v.begin(), v.end(), [](const Point& a, const Point& b) {
    if (a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
  });

  for (const Point& p : v) cout << p.x << ' ' << p.y << '\n';
  
  return 0;
}