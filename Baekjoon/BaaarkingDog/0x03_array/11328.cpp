// 11328: Strfry

#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int alphabet[26] = {0}, cnt = 0;
    string word1, word2;
    cin >> word1 >> word2;

    for (char c : word1) alphabet[c - 'a']++;
    for (char c : word2) alphabet[c - 'a']--;

    for (int a_cnt : alphabet) cnt += (a_cnt > 0 ? a_cnt:-a_cnt);

    cout << (cnt != 0 ? "Impossible":"Possible") << endl;
  }

  return 0;
}