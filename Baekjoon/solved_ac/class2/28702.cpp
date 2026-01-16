#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int ans;

    for (int i=3; i>=1; i--) {
        string input;
        cin >> input;

        if (input.back() != 'z') {
        // if (1 <= input.front()-'0' && input.front()-'0' <= 9) {
            ans = stoi(input)+i;
        }
    }
    
    if (ans%3 == 0 && ans%5 == 0) cout << "FizzBuzz";
    else if (ans%3 == 0) cout << "Fizz";
    else if (ans%5 == 0) cout << "Buzz";
    else cout << ans;
    
    return 0;
}