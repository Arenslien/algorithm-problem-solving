// 2562: 최댓값
#include <iostream>

int main() {
    int max = 0, index;

    for (int i=1, num; i<=9; i++) {
        std::cin >> num;
        if (num > max) {
            max = num;
            index = i;
        }
    }

    std::cout << max << "\n" << index;

    return 0;
}