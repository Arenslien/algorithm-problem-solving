# 2444: 별 찍기 - 7 

N = int(input())

for i in range(N):
  print(" " * (N - i - 1), end="")
  print("*" * (i*2 + 1))

for i in range(N-2, -1, -1):
  print(" " * (N - i - 1), end="")
  print("*" * (i*2 + 1))