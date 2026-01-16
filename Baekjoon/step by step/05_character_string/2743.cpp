// 2743: 단어 길이 재기

#include <iostream>

int main() {
    char word[101];

    std::cin >> word;

    for (int i=0; i<101; i++) {
        if (word[i] == '\0') {
            std::cout << i;
            break;
        }
    }

    return 0;
}

// #include <string>

// int main() {
//     std::string word;

//     std::cin >> word;
//     std::cout << word.length();

//     return 0;
// }