#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, v;
  int cnt_arr[201] = {0, }; // -100 ~ 100 -> 1 201 - 101
  string line;

  cin >> N;
  cin.ignore();
  getline(cin, line);
  cin >> v;

  for (int i=0; i<N; i++) {
    int num = std::stoi(line[i*2]);
    cnt_arr[num + 101]++;
  }

  cout << cnt_arr[v+101];

  return 0;
}