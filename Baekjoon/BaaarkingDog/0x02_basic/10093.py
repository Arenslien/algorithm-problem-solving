# 10093: 숫자

A, B = list(map(int, input().split()))

if (A > B):
  print(A-B-1)
  for i in range(B+1, A): print(i, end=" ")

elif (B > A):
  print(B-A-1)
  for i in range(A+1, B): print(i, end=" ")

else:
  print(0)