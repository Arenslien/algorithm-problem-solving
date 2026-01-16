# 2563: 색종이

N = int(input())
paper = [[0 for j in range(100)] for i in range(100)]

for _ in range(N):
  x, y = list(map(int, input().split()))

  for i in range(10):
    for j in range(10):
      paper[i+x][j+y] = 1

area = 0

for i in range(100):
  for j in range(100):
    area += paper[i][j]

print(area)