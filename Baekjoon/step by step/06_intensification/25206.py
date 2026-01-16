# 25206: 너의 평점은
import sys

grade_dict = {"A+": 4.5, "A0": 4.0, "B+": 3.5, "B0": 3.0, "C+": 2.5, "C0": 2.0, "D+": 1.5, "D0": 1.0, "F": 0.0}

credit_sum = 0
credit_grade_sum = 0

try:
  for line in sys.stdin:
    _, credit, grade = line.split()

    if grade == "P": continue

    credit_sum += int(float(credit))
    credit_grade_sum += int(float(credit)) * grade_dict[grade]
except:
  pass

print("%.6f" % (credit_grade_sum/credit_sum))