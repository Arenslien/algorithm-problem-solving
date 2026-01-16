// 10989: 수 정렬하기 3

#include <iostream>
using namespace std;

int main() {
  int N, cnt[10000] = {};
  cin >> N;

  while (N--) {
    int num;
    
    cin >> num;
    cnt[num-1]++;
  }

  for (int i=0; i<10000; i++) {
    if (cnt[i] != 0) {
      for (int j=0; j<cnt[i]; j++) cout << i+1 << '\n';
    }
  }
}