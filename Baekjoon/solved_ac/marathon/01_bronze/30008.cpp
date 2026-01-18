// Authored by: Arenslien
// BOJ: 30008 - 준영이의 등급

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, K;
  cin >> N >> K;

  while (K--) {
    int G;
    cin >> G;

    int grade = G * 100 / N;

    if (grade <= 4) cout << 1 << ' ';
    else if (grade <= 11) cout << 2 << ' ';
    else if (grade <= 23) cout << 3 << ' ';
    else if (grade <= 40) cout << 4 << ' ';
    else if (grade <= 60) cout << 5 << ' ';
    else if (grade <= 77) cout << 6 << ' ';
    else if (grade <= 89) cout << 7 << ' ';
    else if (grade <= 96) cout << 8 << ' ';
    else cout << 9 << ' ';

  }

  return 0;
}