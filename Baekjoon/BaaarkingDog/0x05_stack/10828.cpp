#include <iostream>
#include <string>

using namespace std;

const int MX = 10005;
int dat[MX];
int pos = 0;

void push(int x) {
    dat[pos++] = x;
}

void pop() {
    cout << (pos ? dat[--pos]:-1) << '\n';
}

void size() {
    cout << pos << '\n';
}

void empty() {
    cout << (pos == 0 ? 1:0) << '\n';
}

void top() {
    cout << (pos ? dat[pos-1]:-1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    while (N--) {
        string cmd;
        cin >> cmd;
        
        if (cmd == "push") {
            int x;
            cin >> x;
            push(x);
        }
        else if (cmd == "pop") pop();
        else if (cmd == "size") size();
        else if (cmd == "empty") empty();
        else top();
    }
    
    return 0;
}