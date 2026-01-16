// 10250: ACM 호텔

#include <iostream>

int main() {
  // 1. 테스트 개수 입력
  int T;
  std::cin >> T;

  while (T--) {
    // 2. 테스트 케이스 입력
    int H, W, N;
    std::cin >> H >> W >> N;

    // 3. 방 배정 알고리즘
    int cnt_H = 0, cnt_W = 1;
    while (N--) {
      if (cnt_H < H) 
        cnt_H++;
      else {
        cnt_H = 1;
        cnt_W++;
      }
    }

    // 4. 방 번호 출력
    std::cout << cnt_H;;
    std::cout.width(2);
    std::cout.fill('0');
    std::cout << cnt_W << std::endl;
  }
  
  return 0;
}