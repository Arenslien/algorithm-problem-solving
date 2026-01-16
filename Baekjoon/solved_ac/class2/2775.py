# 2775: 부녀회장이 될테야

T = int(input())

for _ in range(T):
  k = int(input())
  n = int(input())

  apartment = [[0 for i in range(n)] for j in range(k+1)]

  for i in range(k):
    sum = 0

    for j in range(n):
      if (i == 0): apartment[i][j] = j+1
      sum += apartment[i][j]
      apartment[i+1][j] = sum
  
  print(apartment[k][n-1])