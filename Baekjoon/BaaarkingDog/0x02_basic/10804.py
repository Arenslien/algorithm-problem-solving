# 10804. 카드 역배치

cards = [i+1 for i in range(20)]

for _ in range(10):
  a, b = map(int, input().split())

  for i in range((b-a)//2+1):
    cards[a+i-1], cards[b-i-1] = cards[b-i-1], cards[a+i-1]

for i in range(20):
  print(cards[i], end=" ")