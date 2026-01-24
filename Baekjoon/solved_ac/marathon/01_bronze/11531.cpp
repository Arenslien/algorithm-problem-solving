// Authored by: Arenslien
// BOJ: 11531 - ACM 대회 채점

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int wrong_cnt[26] = {0, };
    bool right_problem[26] = {false, };
    int cnt = 0, time = 0;
    
    while (true) {
        int m;
        cin >> m;
        
        if (m == -1) break;
        
        char p;
        string result;
        
        cin >> p >> result;
        
        if (result[0] == 'w') wrong_cnt[p-'A']++;
        else if (result[0] == 'r') {
            right_problem[p-'A'] = true;
            time += m;
        }
        
    }
    
    for (int i=0; i<26; ++i) {
        if (right_problem[i]) {
            cnt++;
            time += wrong_cnt[i] * 20;
        }
    }
    
    cout << cnt <<  ' ' << time;
    
    return 0;
}
