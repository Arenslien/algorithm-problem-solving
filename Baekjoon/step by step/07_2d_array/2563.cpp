// 2563: 색종이

#include <iostream>

int main() {
  int N, area = 0;
  int paper[100][100] = {0};
  
  std::cin >> N;

  while (N--) {
    int x, y;
    std::cin >> x >> y;

    for (int i=0; i<10; i++) {
      for (int j=0; j<10; j++) {
        paper[i+x][j+y] = 1;
      }
    }
  }

  for (int i=0; i<100; i++) {
    for (int j=0; j<100; j++) {
      area += paper[i][j];
    }
  }

  std::cout << area;

  return 0;
}