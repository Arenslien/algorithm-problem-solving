#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (true) {
    int N, sum = 0;
    cin >> N;
    if (N == -1) break;

    string ans = to_string(N) + " = ";
    for (int i=1; i<N; i++) {
      if (N % i == 0) {
        sum += i;
        ans += to_string(i);
        if (sum != N) ans += " + "; 
      }
    }

    if (N == sum) cout << ans;
    else cout << N << " is NOT perfect.";
    cout << '\n';
  }

  return 0;
}