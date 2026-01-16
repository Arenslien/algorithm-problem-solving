//10811: 바구니 뒤집기

#include <iostream>
#include <algorithm>

int main() {
    int N, M;

    std::cin >> N >> M;

    int basket[N+1];
    for (int i=1; i<=N; ++i) basket[i] = i;

    for(int i, j; M--; ) {
        std::cin >> i >> j;
        for(int pivot=1; pivot<=(j-(i-1))/2; pivot++) {
            std::swap(basket[pivot+i-1], basket[j-pivot+1]);
        }
    }

    for (int i=1; i<=N; i++) std::cout << basket[i] << " ";

    return 0;
}