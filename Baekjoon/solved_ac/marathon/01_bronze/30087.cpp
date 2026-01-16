// Authored by: Arenslien
// BOJ: 30087 - 진흥원 세미나

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  unordered_map<string, string> course = {
    {"Algorithm", "204"},
    {"DataAnalysis", "207"},
    {"ArtificialIntelligence", "302"},
    {"CyberSecurity", "B101"},
    {"Network", "303"},
    {"Startup", "501"},
    {"TestStrategy", "105"},
  };

  int N;
  cin >> N;

  while (N--)
  {
    string name;
    cin >> name;
    cout << course[name] << '\n';
  }

    return 0;
}