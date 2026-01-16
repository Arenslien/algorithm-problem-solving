// 1919: 애너그램

#include <iostream>
#include <string>
using namespace std;

// int main() {
  // int alphabet1[26] = {0}, alphabet2[26] = {0}, cnt = 0;
  // string word1, word2;
  // cin >> word1 >> word2;

//   for (int i=0; i<word1.length(); i++) alphabet1[word1.at(i) - 'a']++;
//   for (int i=0; i<word2.length(); i++) alphabet2[word2.at(i) - 'a']++;

//   for (int i=0; i<26; i++) {
//     if (alphabet1[i] == alphabet2[i]) continue;

//     cnt += (alphabet1[i] > alphabet2[i] ? alphabet1[i]-alphabet2[i]:alphabet2[i]-alphabet1[i]);
//   }

//   cout << cnt;

//   return 0;
// }

int main() {
  int alphabet[26] = {0}, cnt = 0;
  string word1, word2;
  cin >> word1 >> word2;

  for (char c : word1) alphabet[c - 'a']++;
  for (char c : word2) alphabet[c - 'a']--;

  for (int i : alphabet) cnt += i > 0 ? i: -i;

  cout << cnt;

  return 0;
}
