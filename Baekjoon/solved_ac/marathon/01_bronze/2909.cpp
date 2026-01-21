// Authored by: Arenslien
// BOJ: 2909 - 캔디 구매

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int C, K;
  cin >> C >> K;

  if (K == 0) {
    cout << C;
    return 0;
  }

  int face_value = 1;
  for (int i=0; i<K; ++i) face_value *= 10;

  int pr = C / face_value * face_value;
  if (C % face_value >= face_value / 2) C = pr + face_value;
  else C = pr;

  cout << C;
}
  // 184 1
  // 184, 10원(1*10)
  // 184 / 10 = 18*10 = 180
  // 182, 2
  // 182, 100원(1*10*10)
  // 200 --> 100 182 200, 200반올림
  // 123450995, 1
  // 123450995, 10원(1*10)
  // 123450995 --> 123451000, 123450990 + 10 = 123451000

    // 182 / 100 = 1
  // 182 % 100 = 82
  // 82 / 10 = (8)

  // 1792 / 100 = 17
  // 1792 % 100 = 92
  // 92 / 10 = (9)

  // 1792 / 1000 = 1
  // 1792 % 1000 = 792
  // 792 / 10 = 79
  // 79 / 10 = 7