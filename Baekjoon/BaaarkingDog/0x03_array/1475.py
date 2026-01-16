plastic_num = [0 for _ in range(10)]
cnt = 0

N = input()

for ch in N:
  digit = int(ch)
  plastic_num[6 if (digit == 6 or digit == 9) else digit] += 1

plastic_num[6] = (plastic_num[6] + 1) // 2

cnt = max(plastic_num)

print(cnt)