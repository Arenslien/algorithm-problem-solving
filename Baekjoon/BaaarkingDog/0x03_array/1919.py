# 1919: 애너그램

alphabet = [0 for _ in range(26)]
cnt = 0
word1 = input()
word2 = input()

for c in word1: alphabet[ord(c) - ord('a')] += 1
for c in word2: alphabet[ord(c) - ord('a')] -= 1

for a_cnt in alphabet: cnt += abs(a_cnt)

print(cnt)