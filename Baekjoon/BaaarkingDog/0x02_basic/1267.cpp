// 1267: 핸드폰 요금

#include <iostream>

int main() {
  // 영식 요금: 30초마다 10원(0~29, 30~59)
  // 민식 요금: 60초마다 15원(0~59, 60~119)

  int N, Y = 0, M = 0;

  std::cin >> N;

  while (N--) {
    int time;
    std::cin >> time;
    Y += 10 + time/30 * 10;
    M += 15 + time/60 * 15;
  }

  if (Y < M) std::cout << "Y " << Y;
  else if (Y > M) std::cout << "M " << M; 
  else std::cout << "Y M " << Y; 

  return 0;
}