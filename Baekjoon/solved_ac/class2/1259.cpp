// 1259: 팰린드롬수

#include <iostream>
#include <string>
using namespace std;

int main() {

  while (true) {
    string num, reverse_num = ""; 
    cin >> num;

    if (num == "0") break;

    for (int i=num.length()-1; i>-1; i--) reverse_num += num.at(i);

    cout << (num == reverse_num ? "yes" : "no") << '\n';
  }

  return 0;
}