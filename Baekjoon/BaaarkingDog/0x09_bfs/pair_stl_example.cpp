// Authored by: Arenslien
// STUDY: C++ pair stl example

#include <iostream>
#include <utility> // pair 사용 위함.

using namespace std;

int main() {
  pair<int, int> p1 = make_pair(5, 6);
  pair<int, int> p2 = {1, 28}; // C++ 11 이상

  cout << "p1: (" << p1.first << ", " << p1.second << ")\n"; 
  cout << "p2: (" << p2.first << ", " << p2.second << ")\n"; 

  cout << (p1 > p2 ? "p1 > p2":"p2 <= p2");

  return 0;
}