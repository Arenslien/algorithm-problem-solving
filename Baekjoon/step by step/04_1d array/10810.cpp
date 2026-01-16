// 10810: 공 넣기

#include <iostream>

int main() {
    int N, M;
    
    std::cin >> N >> M;

    int basket[N + 1] = {};

    for (int I, J, K; M--; ) {
        std::cin >> I >> J >> K;

        for (int j=I; j<=J; j++) basket[j] = K;
    }

    for (int i=1; i<=N; i++) std::cout << basket[i] << " ";

    return 0;
}