# 2798: 블랙잭

N, M = list(map(int, input().split()))
max = 0

nums = list(map(int, input().split()))

for i in range(N):
  for j in range(N):
    for k in range(N):
      if (i == j or j == k or k == i): continue

      if (M >= nums[i] + nums[j] + nums[k] and
          max < nums[i] + nums[j] + nums[k]):
        max = nums[i] + nums[j] + nums[k]

print(max)