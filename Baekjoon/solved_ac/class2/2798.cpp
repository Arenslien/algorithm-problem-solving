// 2798: 블랙잭

#include <iostream>
using namespace std;

int main() {
  int N, M, max = 0;
  cin >> N >> M;

  int nums[N];

  for (int i=0; i<N; i++) cin >> nums[i];
  
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      for (int k=0; k<N; k++) {
        if (i == j || j == k || k == i) continue;

        if (M >= nums[i] + nums[j] + nums[k] && max < nums[i] + nums[j] + nums[k])
          max = nums[i] + nums[j] + nums[k];
      }
    }
  }

  cout << max;

  return 0;
}