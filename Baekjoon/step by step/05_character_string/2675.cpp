// 2675: 문자열 반복

#include <iostream>

// int main() {
//     int T;

//     std::cin >> T;

//     while(T--) {
//         char P[161];
//         char S[21];
//         int R;
        
//         std::cin >> R >> S;

//         int idx = 0;

//         for (int i=0; S[i] != '\0'; ++i) {
//             for (int j=0; j<R; ++j) {
//                 P[idx++] = S[i];
//             }
//         }

//         P[idx] = '\0';

//         std::cout << P << '\n';
//     }

//     return 0;
// }

#include <string>

int main() {
    int T;

    std::cin >> T;

    while(T--) {
        std::string S, P = "";
        int R;
        
        std::cin >> R >> S;

        for (int i=0; S[i] != '\0'; ++i) {
            for (int j=0; j<R; ++j) P += S[i];
        }

        std::cout << P << '\n';
    }

    return 0;
}

