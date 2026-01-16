// Authored by : Arenslien
// BOJ : 23971번 - ZOAC 4

#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int H, W, N, M;
  cin >> H >> W >> N >> M;
  
  cout << ((H-1)/(N+1)+1)*((W-1)/(M+1)+1);

  return 0;
}
