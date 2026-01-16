# 2577: 숫자의 개수
num = 1

cnt_list = [0 for _ in range(10)]

for i in range(3):
  num *= int(input())

for i in str(num):
  cnt_list[int(i)] += 1

for cnt in cnt_list:
  print(cnt)