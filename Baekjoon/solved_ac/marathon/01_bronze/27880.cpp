// Authored by: Arenslien
// BOJ: 27880 - Gahui and Soongsil University station

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int depth = 0;

  for (int i=0; i<4; ++i) {
    string s; int d;
    cin >> s >> d;
    
    if (s[0] == 'E') depth += d * 21;
    else depth += d * 17;
  }

  cout << depth;

  return 0;
}