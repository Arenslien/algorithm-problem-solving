# 10989: 수 정렬하기 3

N = int(input())

cnt = [0 for _ in range(10000)]

for _ in range(N):
  cnt[int(input())-1] += 1

for i in range(10000):
  if (cnt[i] != 0):
    for j in range(cnt[i]):
      print(i+1)
