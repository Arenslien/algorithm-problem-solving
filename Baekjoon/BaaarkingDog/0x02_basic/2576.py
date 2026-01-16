# 2576: 홀수

min = 100
sum = 0

for _ in range(7):
  num = int(input())

  if (num % 2 == 1):
    sum += num
    if (min > num): min = num

print(-1 if sum == 0 else f"{sum}\n{min}")