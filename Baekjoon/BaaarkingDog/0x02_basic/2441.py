# 2441: 별 찍기 - 4

N = int(input())

for i in range(N):
  print(" " * i, end="")
  print("*" * (N-i))