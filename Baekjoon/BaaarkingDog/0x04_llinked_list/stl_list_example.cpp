#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> L = {1, 2}; // 1 2 <end>
  list<int>::iterator iter = L.begin(); // 1을 가리킴
  
  L.push_front(10); // 10 1 2 <end>

  cout << *iter << '\n'; // 1

  L.push_back(5); // 10 1 2 5 <end>
  L.insert(iter, 6); // 10 6 1 2 5 <end> // iter 앞 에 추가
  iter++; // 2 가리킴
  iter = L.erase(iter); // 10 6 1 5 <end> // 2 제거 후 포인트 다음 가리킴

  cout << *iter << '\n'; // 5

  for (auto i : L) cout << i << ' ';

  cout << '\n';

  L.insert(L.end(), 33);

  for (list<int>::iterator it = L.begin(); it != L.end(); it++) cout << *it << ' ';

  cout << '\n' << *L.end() << '\n';

  cout << *(--L.end());

  return 0;
}
