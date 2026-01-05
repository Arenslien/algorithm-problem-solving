// Authored by: Arenslien
// BOJ: 10816 - 숫자 카드 2

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N, M;
  cin >> N;
  
  unordered_map<int, int> map;
  
  while (N--) {
    int x;
    cin >> x;
    map[x]++;
  }
  
  cin >> M;
  while (M--) {
    int x;
    cin >> x;
    cout << map[x] << ' ';
  }
  
  return 0;
}

// struct card_info {
//   int num, cnt = 1;
// };

// int get_count(vector<card_info>& cards, int x, int start, int end) {
//   if (start > end) return 0;

//   int mid = (start+end)/2;

//   if (x == cards[mid].num) return cards[mid].cnt;
//   else if (x < cards[mid]) return get_count(start, mid-1);
//   else return get_count(mid+1, end);
// }

// vector<card_info> cards;

  // for (int i=0; i<N; ++i) {
  //   struct card_info card;
  //   cin >> card.num;

  //   if (get_count(card.num) == -1) cards.push_back(card);
  //   // else card.cnt ++;
  // }

  // sort(cards.begin(), cards.end(), (const struct card_info& card, const struct card_info& card2){
  //   return card.num < card2.num;
  // });

  // cin >> M;
  // for (int i=0; i<M; ++i) {
  //   int x;
  //   cin >> x;
  //   cout << get_count(cards, x, 0, cards.size()-1);
  // }