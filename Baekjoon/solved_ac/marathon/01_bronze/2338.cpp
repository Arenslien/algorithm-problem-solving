#include <iostream>
#include <string>

int main() {
  // 1. 정수 입력(문자열 처리)
  std::string A, B;
  int result[1000] = {};
  std::cin >> A >> B;

  // 2. 자리 수 0 채우기
  std::cout << A.length();
  
  std::string temp = "";
  for (int i=0; i<1000-A.length(); i++) temp += '0';
  A = temp + A; 

  temp = "";
  for (int i = 0; i < 1000 - B.length(); i++) temp += '0';
  B = temp + B;

  std::cout << A << '\n'
            << B << '\n';

  // 3. A + B 출력
  for (int i=1000-1; i >= 0; i--) {
    if (A.at(i) != '0' && B.at(i) != '0') {
      result[i] += (A.at(i) - '0') + (B.at(i) - '0');
      result[i-1] +=
    }
  }


  // 4. A - B 출력



  // 5. A * B 출력

  // for (char alphabet : A)
  // std::cout << A + B << '\n'
  //           << A - B << '\n'
  //           << A * B;

  return 0;
}