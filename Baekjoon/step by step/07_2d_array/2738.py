# 2738: 행렬 덧셈

N, M = list(map(int, input().split()))

matrix = [[0] * M for _ in range(N)]

for i in range(N):
  matrix[i] = list(map(int, input().split()))

for i in range(N):
  row = list(map(int, input().split()))
  for j in range(M):
    matrix[i][j] += row[j]

for i in range(N):
  for j in range(M):
    print(matrix[i][j], end=" ")
  print()