#include <iostream>

int main() {
    // 변수 선언
    int N, int_list[201] = {0}, v;
    
    // N 입력
    std::cin >> N;

    // N 개의 정수 입력
    for (int i=0, num; i<N; i++) {
        std::cin >> num;
        int_list[num + 100]++; 
    }
    
    // 정수 v 개수 출력
    std::cin >> v;
    std::cout << int_list[v + 100];

    return 0;
}