# 10808: 알파벳 개수

alphabet_array = [0 for _ in range(26)] 

S = input()

for alphabet in S:
  alphabet_array[ord(alphabet) - ord('a')] += 1

for alphabet_count in alphabet_array:
  print(alphabet_count, end=" ")

