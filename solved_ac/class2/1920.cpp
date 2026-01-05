#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool is_exist(const vector<int>& arr, int x, int start, int end) {
  if (start > end) return false;
  
  int mid = (start+end) / 2;
  
  if (x == arr[mid]) return true;
  else if (x < arr[mid]) return is_exist(arr, x, start, mid-1);
  else return is_exist(arr, x, mid+1, end);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N, M;
  cin >> N;
  
  vector<int> v;
  for (int i=0; i<N; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  cin >> M;
  while (M--) {
    int x;
    cin >> x;
    cout << (is_exist(v, x, 0, v.size()-1) ? 1:0) << '\n';
  }

  return 0;
}