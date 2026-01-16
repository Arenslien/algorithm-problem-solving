// Authored by: Arenslien
// BOJ: 9316번 - Hello Judge!

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  
  for (int i=0; i<N; i++) cout << "Hello World, Judge " << i+1 << "!\n";

  return 0;
}