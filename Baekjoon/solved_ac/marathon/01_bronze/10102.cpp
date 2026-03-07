// Authored by: Arenslien
// BOJ: 10102 - 개표

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string votes;
  int V, cnt[2] = {0, 0};
  cin >> V >> votes;

  for (char v : votes) cnt[v - 'A']++;

  if (cnt[0] > cnt[1]) cout << "A";
  else if (cnt[0] < cnt[1]) cout << "B";
  else cout << "Tie";
  
  return 0;
}