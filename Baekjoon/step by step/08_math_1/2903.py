# 2903: 중앙 이동 알고리즘

N = int(input())

current_point = 2

for _ in range(N):
  current_point += current_point-1

print(current_point ** 2)

# 2

# 3(2 + (2-1)) . . .

# 5(3 + (3-1)) .. .. .

# 9(5 + (5-1))' " ' " ' " ' " '

# 17(9 + (9-1))' ' ' ' ' ' ' ' '

# 33(17 + (17-1))