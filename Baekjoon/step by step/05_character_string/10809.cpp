// 10809: 알파벳 찾기

#include <iostream>

// int main() {
//     int alphabet[26];
//     char word[101];
//     std::cin >> word;

//     for (int i=0; i<26; i++)
//         alphabet[i] = -1;

//     for (int i=0; word[i] != '\0'; i++) {
//         if (alphabet[word[i] - 'a'] == -1) alphabet[word[i] - 'a'] = i;
//     }

//     for (int i=0; i<26; i++)
//         std::cout << alphabet[i] << " ";

//     return 0;
// }

#include <string>

int main() {
    int alphabet[26];
    std::string word;

    std::cin >> word;

    for (int i=0; i<26; i++) alphabet[i] = -1;

    for (int i=0; i<word.length(); i++)
        if (alphabet[word[i] - 'a'] == -1) alphabet[word[i] - 'a'] = i;

    for (int i=0; i<26; i++)
        std::cout << alphabet[i] << " ";

    return 0;
}