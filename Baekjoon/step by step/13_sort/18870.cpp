// Authored by: Arenslien
// BOJ: 18870 - 좌표 압축

#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  
  vector<int> v;
  for (int i=0; i<N; ++i) {
    int x;
    cin >> x;
    v.push_back(x);
  }  


  return 0;
}