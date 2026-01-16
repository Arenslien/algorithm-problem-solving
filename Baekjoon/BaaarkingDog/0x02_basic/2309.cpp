// 2309: 일곱 난쟁이

#include <iostream>

int main() {
  int height_array[9], sum = 0; 

  for (int i=0; i<9; i++) {
    std::cin >> height_array[i];
    sum += height_array[i];
  }

  for (int i=0; i<9-1; i++) {
    for (int j=0; j<9-1-i; j++) {
      if (height_array[j] > height_array[j+1]) {
        int temp = height_array[j];
        height_array[j] = height_array[j+1];
        height_array[j+1] = temp;
      }
    }
  }

  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      if (i == j) continue;
      if (sum - height_array[i] - height_array[j] == 100) {
        for (int k=0; k<9; k++) {
          if (k == i || k == j) continue;
          std::cout << height_array[k] << "\n";
        }
        return 0;
      }
    }
  }

  return 0;
}