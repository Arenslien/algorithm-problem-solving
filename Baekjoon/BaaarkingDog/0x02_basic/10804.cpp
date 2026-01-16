// 10804: 카드 역배치

#include <iostream>

int main() {
  int cards[20];

  for (int i=0; i<20; i++) cards[i] = i+1;

  for (int i=0; i<10; i++) {
    int a, b;
    std::cin >> a >> b;

    for (int j=0; j<(b-a)/2+1; j++) {
      int temp = cards[a+j-1];
      cards[a+j-1] = cards[b-j-1];
      cards[b-j-1] = temp;
    }
  }

  for (int i=0; i<20; i++) std::cout << cards[i] << ' ';

  return 0;
}