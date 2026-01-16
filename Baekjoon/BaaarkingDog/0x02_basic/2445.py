# 2445: 별 찍기 - 8

N = int(input())
step = 1
i = 1

while (i > 0):
  if (i == N): step = -1

  print("*" * i, end="")
  print(" " * ((N-i) * 2), end="")
  print("*" * i)

  i += step