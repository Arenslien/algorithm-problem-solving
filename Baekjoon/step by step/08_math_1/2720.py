# 2720: 세탁소 사장 동혁

T = int(input())

for i in range(T):
  C = int(input())

  for cent in (25, 10, 5, 1):
    print(C//cent, end=" ")
    C %= cent

  print()