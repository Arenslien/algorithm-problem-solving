# 11328: Strfry

N = int(input())

for _ in range(N):
  alphabet = [0 for _ in range(26)]
  cnt = 0
  word1, word2 = input().split()

  for c in word1: alphabet[ord(c) - ord('a')] += 1
  for c in word2: alphabet[ord(c) - ord('a')] -= 1

  for a_cnt in alphabet: cnt += a_cnt if a_cnt > 0 else -a_cnt

  print("Possible" if cnt == 0 else "Impossible")