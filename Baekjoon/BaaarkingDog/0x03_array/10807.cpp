#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N, v;
  int arr[201] = {};
  
  cin >> N;
  while (N--) {
    int num;
    cin >> num;
    arr[num+100]++;
  }
  cin >> v;

  cout << arr[v+100];

  return 0;
}