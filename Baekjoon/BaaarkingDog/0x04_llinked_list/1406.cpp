#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  int M;

  // 1. 초기 문자열 s, 명령어 개수 M 입력
  cin >> s >> M;

  // 2. 연결 리스트에 문자열 입력
  list<char> L;
  for (char alphabet : s) L.push_back(alphabet);

  list<char>::iterator cursor = L.end();

  while (M--) {
    // 3. cmd 입력
    char cmd;
    cin >> cmd;

    // 4. cmd 조건
    if (cmd == 'P') {
      char c;
      cin >> c;
      L.insert(cursor, c);
    }
    else if (cmd == 'L') { 
      if (cursor != L.begin()) cursor--;
    }
    else if (cmd == 'D') { 
      if (cursor != L.end()) cursor++;
    }
    else { 
      if (cursor != L.begin()) cursor = L.erase(--cursor);
    }
  }

  // 5. 출력
  for (auto l : L) cout << l;

  return 0;
}