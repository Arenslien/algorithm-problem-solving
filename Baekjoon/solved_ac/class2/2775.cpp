// 2775: 부녀회장이 될테야

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int k, n;
    cin >> k >> n;

    int apartment[k+1][n];
    for (int i=0; i<k; i++) {
      int sum = 0;

      for (int j=0; j<n; j++) {
        if (i == 0) apartment[i][j] = j+1;

        sum += apartment[i][j];
        apartment[i+1][j] = sum;
      }
    }

    cout << apartment[k][n-1] << '\n';
  }

  return 0;
}