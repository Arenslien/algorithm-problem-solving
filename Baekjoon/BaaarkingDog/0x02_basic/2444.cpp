#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, t = 1;
    cin >> N;

    for (int i=0; i>-1; i+=t) {
      if (i == N-1) t = -1;

      for (int j=0; j<N-1-i; j++) cout << ' ';
      for (int j=0; j<i*2+1; j++) cout << '*';
      cout << '\n';
    }

  return 0;
}