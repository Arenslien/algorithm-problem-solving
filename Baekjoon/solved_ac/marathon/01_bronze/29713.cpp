// Authored by: Arenslien
// BOJ: 29713 - 브실이의 띠부띠부씰 컬렉션 🍪

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, cnt[26] = {}, result = 1000;
  string s;
  cin >> N >> s;

  string bs = "BRONZESILVER"; // BEEILNORRSVZ 

  for (char alphabet : s) cnt[alphabet - 'A']++;

  for (char alphabet : bs) {
    int count = cnt[alphabet-'A'];

    if (alphabet == 'E' || alphabet == 'R') count /= 2;
    
    if (result > count) result = count;
  }

  cout << result;

  return 0;
}