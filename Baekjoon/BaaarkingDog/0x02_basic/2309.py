# 2309: 일곱 난쟁이

height_list = [0 for _ in range(9)]
sum = 0
isEnd = False

for i in range(9):
  height_list[i] = int(input())
  sum += height_list[i]

height_list = sorted(height_list)

for i in range(9):
  for j in range(9):
    if (i == j): continue

    if (sum - height_list[i] - height_list[j] == 100):
      for k in range(9):
        if (k == i or k == j): continue
        print(height_list[k])
        isEnd = True
      break
  if (isEnd): break