# 30802: 웰컴 키트

N = int(input())
shirts = list(map(int, input().split()))
T, P = list(map(int, input().split()))

sum = 0
for i in range(6):
  if (shirts[i] % T == 0): sum += shirts[i]//T
  else: sum += shirts[i]//T + 1

print(sum)
print(N//P, N%P)
