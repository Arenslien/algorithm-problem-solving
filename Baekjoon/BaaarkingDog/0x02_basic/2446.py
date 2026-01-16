# 2446: 별 찍기 - 9

N = int(input())
step = 1
i = 0

while (i > -1):
  if (i == N-1): step = -1

  print(" " * i, end="")
  print("*" * ((N-i) * 2 -1))

  i += step