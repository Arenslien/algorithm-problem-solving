// Authored By: Arenslien
// BOJ: 1759 - 암호 만들기

#include <iostream>
#include <algorithm>

using namespace std;

int L, C, vowel = 0, consonant = 0;
char code[15], result[15];

void solve(int k, int start) {
  // 1. Base Condition
  if (k == L) {
    if (vowel >= 1 && consonant >= 2)
    for (int i=0; i<L; ++i) cout << result[i];
    cout << '\n';
    return;
  }

  // 2. Backtracking
  for (int i=start; i<C; ++i) {
    result[k] = code[i];
    if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u') vowel++;
    else consonant++;
    solve(k+1, i+1);
    if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u') vowel--;
    else consonant--;
  }
} 


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // 1. L, C & 암호 입력
  cin >> L >> C;
  for (int i=0; i<C; ++i) cin >> code[i];

  // 2. 정렬
  sort(code, code+C);

  // 3. 백트래킹
  // 정성훈 바봉ㅎㅎ
  // 안녕하세요 저는 정성훈 입니다 만나서 반갑습니다 찡긋 ㅋ
  solve(0, 0);

  return 0;
}

// char code[15];
// int is_used[26];

// void solve(int k) {
//   // 1. Base Condition
//   if (k == L) {
//     int vowel = 0, consonant = 0;
//     for (int i=0; i<L; ++i) {
//       if (code[i] == 'a' || code[i] == 'e' || code[i] == 'i' || code[i] == 'o' || code[i] == 'u') vowel++;
//       else consonant++;
//     }

//     if (vowel >= 1 && consonant >= 2) {
//       for (int i=0; i<L; ++i) cout << code[i];
//       cout << '\n';
//     }
//     return;
//   }

//   // 2. Backtracking
//   for (int i=0; i<26; ++i) {
//     if (is_used[i] == 0) {
//       code[k] = 'a' + i;
//       is_used[i] = 1;
//       solve(k+1);
//       is_used[i] = 0;
//     } 
//   }

// }

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   cin >> L >> C;

//   for (int i=0; i<26; ++i) is_used[i] = -1; 

//   for (int i=0; i<C; ++i) {
//     char c; cin >> c;
//     is_used[c - 'a'] = 0;
//   }

//   solve(0);

//   return 0;
// }

// a b c d e
// f g h i j
// k l m n o
// p q r s t
// u v w x y z