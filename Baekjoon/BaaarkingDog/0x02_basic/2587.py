# 2587: 대표값2

nums = [0 for _ in range(5)]
sum = 0

for i in range(5):
  nums[i] = int(input())
  sum += nums[i]

nums = sorted(nums)

print(f"{int(sum/5)}\n{nums[2]}")