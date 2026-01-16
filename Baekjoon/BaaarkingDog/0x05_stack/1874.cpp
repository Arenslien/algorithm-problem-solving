#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, cnt = 1;
  cin >> n;

  stack<int> S;
  vector<char> ans;

  while (n--) {
    int num;
    cin >> num;

    while (true) {
      if (S.empty() || S.top() < num) {
        S.push(cnt++);
        ans.push_back('+');
      }
      else if (S.top() == num) {
        S.pop();
        ans.push_back('-');
        break;
      }
      else {
        cout << "NO";
        return 0;
      }
    }
  }

  for (char n : ans) cout << n << '\n';

  return 0;
}