// 2738: 행렬 덧셈

#include <iostream>
#include <string>

int main() {
  int N, M;
  std::cin >> N >> M;
  
  int matrix[N][M] = {0};


  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      std::cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int num;
      std::cin >> num;
      matrix[i][j] += num;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}