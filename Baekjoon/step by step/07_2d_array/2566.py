max_num = 0
row_index = 0
col_index = 0

for i in range(9):
  numbers = list(map(int, input().split()))
  for j in range(9):
    if max_num <= numbers[j]:
      max_num = numbers[j]
      row_index = i+1
      col_index = j+1

print(max_num)
print(row_index, col_index)