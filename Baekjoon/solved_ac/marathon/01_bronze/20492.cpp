// Authored by: Arensline
// BOJ: 20492 - 세금

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  cout << int(N - int(N * 0.22)) << ' ' << int(N - int(N * 0.2 * 0.22));

  return 0;
}