// 30802: 웰컴 키트

#include <iostream>
using namespace std;

int main() {
  int N, T, P, sum=0, shirts[6];
  cin >> N;

  for (int i=0; i<6; i++) cin >> shirts[i];
  cin >> T >> P;
  
  for (int i=0; i<6; i++) {
    if (shirts[i] % T == 0) sum += shirts[i]/T;
    else sum += shirts[i]/T + 1;
  }

  cout << sum << endl;
  cout << N/P << " " << N%P;

  return 0;
}