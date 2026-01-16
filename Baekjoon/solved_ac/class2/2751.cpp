#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<int> v;
  while (N--) {
    int n;
    cin >> n;
    v.push_back(n);
  }

  sort(v.begin(), v.end());

  for (int num : v) cout << num << '\n';

  return 0;
}