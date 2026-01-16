# 1158: 요세푸스 문제

from collections import deque

N, K = list(map(int, input().split()))

q = deque(range(1, N+1)) # [i+1 for i in range(N)]

print('<', end="")

cnt = 1
while (len(q) != 1):
  if (cnt % K != 0): q.append(q.popleft()) # 기존 코드: del q[0], append() 활용 -> O(N)
  else: print(f"{q.popleft()}, ", end="")

  cnt += 1

print(f"{q.pop()}>")
