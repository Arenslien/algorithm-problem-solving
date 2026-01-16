#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

  string r1, r2, r3;
  cin >> r1 >> r2 >> r3;

  long long result = 0;

  for (int i=0; i<10; i++) {
    if (r1 == color[i]) result += i * 10;
    if (r2 == color[i]) result += i;
  }

  for (int i=0, val=1; i<10; i++) { 
    if (r3 == color[i]) result *= val;
    val *= 10;
  }

  cout << result;

  return 0;
}