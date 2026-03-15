// Authored By: Arenslien
// BOJ: 32326 - Conveyor Belt Sushi

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int R, G, B;
  cin >> R >> G >> B;

  cout << R*3 + G*4 + B*5;

  return 0;
}