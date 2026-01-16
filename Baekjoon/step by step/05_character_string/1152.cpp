#include <iostream>
#include <string>
using std::string;

#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	int res = 1;

	getline(cin, s);

	if (s.length() == 1 && s[0] == ' ') {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i] == ' ') res++;
	}

	cout << res;

	return 0;
}


// int main() {
//     int cnt = 0;
//     string sentence;
//     std::getline(std::cin, sentence);

//     string trim_sentence = trim(sentence);

//     for(int i=0; i<trim_sentence.length(); i++) {
//         if (trim_sentence[i] == ' ') ++cnt;
//     }

//     std::cout << (cnt == 0? cnt:cnt+1);

//     return 0;
// }

// string trim(string sentence) {
//     string trim_sentence;

//     trim_sentence = ltrim(sentence);
//     trim_sentence = rtrim(trim_sentence);

//     return trim_sentence;
// }

// string ltrim(string sentence) {
//     string ltrim_sentence = "";
//     int start = 0;

//     for (int i=0; i<sentence.length(); i++) {
//         if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\v') {
//             break;
//         }
//         ++start;
//     }

//     for (int i=start; i<sentence.length(); i++) {
//         ltrim_sentence += sentence[i];
//     }

//     return ltrim_sentence;
// }

// string rtrim(string sentence) {
//     string rtrim_sentence = "";
//     int end = sentence.length();

//     while (end--) {
//         if (sentence[end] != ' ' && sentence[end] != '\t' && sentence[end] != '\v') {
//             break;
//         }
//     }

//     for (int i=0; i<end + 1; i++) {
//         rtrim_sentence += sentence[i];
//     }

//     return rtrim_sentence;
// }