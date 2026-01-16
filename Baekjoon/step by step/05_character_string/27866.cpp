// 27866: 문자와 문자열

#include <iostream>

int main() {
    char S[1001]; // 널문자 크기 고려
    int i;

    std::cin >> S >> i;
    std::cout << S[i-1];

    return 0;
}


// #include <iostream>
// #include <string>

// int main() {
//     std::string S;
//     int i;

//     std::cin >> S >> i;
//     std::cout << S[i-1];

//     return 0;
// }

