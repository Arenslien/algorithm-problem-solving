// Authored By: Arenslien
// BOJ: 1759 - 암호 만들기

#include <iostream>

using namespace std;

int L, C;

char code[15];
int is_used[26];

void solve(int k) {
  // 1. Base Condition
  if (k == L) {
    int vowel = 0, consonant = 0;
    for (int i=0; i<L; ++i) {
      if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u') vowel++;
      else consonant++;
    }

    if (vowel >= 1 && consonant >= 2) {
      for (int i=0; i<L; ++i) cout << code[i];
      cout << '\n';
    }
    return;
  }

  // 2. Backtracking
  for (int i=0; i<26; ++i) {
    if (is_used[i] == 0) {
      code[k] = 'a' + i;
      is_used[i] = 1;
      solve(k+1);
      is_used[i] = 0;
    } 
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> L >> C;

  for (int i=0; i<26; ++i) is_used[i] = -1; 

  for (int i=0; i<C; ++i) {
    char c; cin >> c;
    is_used[c - 'a'] = 0;
  }

  solve(0);

  return 0;
}

// a b c d e
// f g h i j
// k l m n o
// p q r s t
// u v w x y z