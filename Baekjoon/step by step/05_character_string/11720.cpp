// 11720: 숫자의 합

#include <iostream>

// int main() {
//     int N, sum = 0;
//     std::cin >> N;

//     char number[N+1];
//     std::cin >> number;

//     while (N--) {
//         sum += number[N] - '0';
//     }

//     std::cout << sum;

//     return 0;
// }

#include <string>

int main() {
    int N, sum = 0;
    std::cin >> N;

    std::string number;
    std::cin >> number;

    for(int i=0; i<number.length(); i++)
        sum += number[i] - '0';
    
    std::cout << sum;

    return 0;
}