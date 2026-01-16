# 2231: 분해합

N = int(input())

for i in range(1, N+1):
  sum = i
  index = i

  while (index > 0):
    sum += index % 10
    index //= 10

  if (sum == N):
    print(i)
    break

  if (i == N): print(0)
