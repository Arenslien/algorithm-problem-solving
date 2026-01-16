#include <iostream>
using namespace std;

int main() {
  int hour, minute, dtime;
  
  cin >> hour >> minute;
  cin >> dtime;

  hour += dtime/60;
  minute += dtime%60;

  if (minute > 59) {
    minute -= 60;
    hour += 1;
  }
  if (hour > 23) {
    hour -= 24;
  }

  cout << hour << " " << minute;

  return 0;
}