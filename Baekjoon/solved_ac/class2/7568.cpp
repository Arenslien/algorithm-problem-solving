#include <iostream>
#include <vector>

using namespace std;

struct body {
  int w, h;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<body> v;

  for (int i=0; i<N; i++) {
    struct body b;
    cin >> b.w >> b.h;
    v.push_back(b);
  }

  for (int i=0; i<N; i++) {
    int rank = 1;

    for (int j=0; j<N; j++) {
      if (v[i].w < v[j].w && v[i].h < v[j].h) rank++;
    }
    cout << rank << ' ';
  }

  return 0;
}