#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);


  stack<string> S;

  while (true) {
    string s;
    getline(cin, s);

    if (s == ".") break;

    if (s == "(" || s == "[") S.push(s); 



  }



  return 0;
}