// 2609 : 최대공약수와 최소공배수

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  return a;
}

int main() {
  int num1, num2;
  cin >> num1 >> num2;

  int GCD = gcd(num1, num2);
  int LCM = (num1 / GCD) * num2;

  cout << GCD << '\n' << LCM;

  return 0;
}