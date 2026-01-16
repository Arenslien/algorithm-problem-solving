// 25206: 너의 평점은

#include <iostream>
#include <unordered_map>
#include <string>

int main() {
  std::unordered_map<std::string, double> grade_dict = {
      {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};

  int credit_sum = 0;
  double credit_grade_sum = 0.0;

  std::string subject, grade;
  double credit;
  while (std::cin >> subject >> credit >> grade) {
    if (grade == "P") {
      continue;
    }

    credit_sum += credit;
    credit_grade_sum += credit * grade_dict[grade];
  }

    std::cout.precision(7);
    std::cout << credit_grade_sum / credit_sum;

  return 0;

}