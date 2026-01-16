#include <iostream>
using namespace std;

int main() {
  int N;
  string result = "";

  cin >> N;
  
  for (int i=0; i<N/4; i++) {
    result += "long ";
  }
  
  cout << result << "int";

  return 0;
}