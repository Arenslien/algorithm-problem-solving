#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct member {
  int order, age;
  string name;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<member> v;
  for (int i=0; i<N; i++) {
    struct member m;
    m.order = i;

    cin >> m.age >> m.name;
    v.push_back(m);
  }

  sort(v.begin(), v.end(), [](const member& a, const member& b) {
    if (a.age != b.age) return a.age < b.age;
    else return a.order < b.order;
  });

  for (const member& m : v) cout << m.age << ' ' << m.name << '\n';
  
  return 0;
}