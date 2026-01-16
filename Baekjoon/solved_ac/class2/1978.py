# 1978: 소수 찾기

N = int(input())
nums = list(map(int, input().split()))

prime = 0
for num in nums:
  cnt = 0

  for i in range(1, num+1):
    if (num % i == 0): cnt += 1
    if (cnt > 2): break

  if (cnt == 2): prime += 1

print(prime)