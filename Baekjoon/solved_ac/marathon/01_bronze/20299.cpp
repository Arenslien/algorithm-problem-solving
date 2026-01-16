// Authored by : Arenslien
// BOJ : 20299 - 3대 측정

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K, L, cnt = 0;
  cin >> N >> K >> L;

  vector<int> ratings;

  while (N--) {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    if (x1+x2+x3 >= K && x1 >= L && x2 >= L && x3 >= L) {
      cnt++;
      ratings.push_back(x1);
      ratings.push_back(x2);
      ratings.push_back(x3);
    }
  }

  cout << cnt << '\n';

  for (int rating : ratings) cout << rating << ' ';

  return 0;
}
