// 10813: 공 바꾸기

#include <iostream>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;
    int basket[N] = {};

    for (int i=0; i<N; i++) basket[i] = i+1;

    for (int i, j; M--; ) {
        std::cin >> i >> j;
        std::swap(basket[i-1], basket[j-1]);
    }

    for (int i=0; i<N; i++) std::cout << basket[i] << " ";

    return 0;
}