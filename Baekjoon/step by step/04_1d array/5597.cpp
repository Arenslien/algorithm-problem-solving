// 5597: 과제 안 내신 분..?

#include <iostream>

int main() {
    bool students[30] = {false};

    for (int i=28, num; i--; ) {
        std::cin >> num;
        students[num-1] = true;
    }

    for (int i=0; i<30; ++i) {
        if (!students[i]) std::cout << i+1 << "\n";
    }

    return 0;
}