// 3052: 나머지

#include <iostream>

int main() {
    bool remainder[42] = {};
    int cnt = 0;

    for (int i=0, num; i<10; ++i) {
        std::cin >> num;
        remainder[num%42] = true;
    }

    for (int i=0; i<42; ++i) if (remainder[i]) ++cnt;

    std::cout << cnt;

    return 0;
}