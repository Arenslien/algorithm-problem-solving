// 2587: 대표값2

#include <iostream>

int main() {
  int nums[5], sum = 0;
  
  for (int i=0; i<5; i++) {
    std::cin >> nums[i];
    sum += nums[i];
  }

  for (int i=0; i<5-1; i++) {
    for (int j=0; j<5-1-i; j++) {
      if (nums[j] > nums[j+1]) {
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }

  std::cout << sum / 5 << "\n" << nums[2];

  return 0;
}