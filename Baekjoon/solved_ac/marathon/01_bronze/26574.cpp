#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  while (N--) {
    string num;
    cin >> num;
    cout << num << ' ' << num << '\n';
  }

  return 0;
}