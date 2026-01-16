#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    cout << (N*100 >= M ? "Yes":"No");
    
    return 0;
}