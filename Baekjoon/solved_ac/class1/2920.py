# 2920: 음계

chords = list(map(int, input().split()))

result = "ascending" if chords[0] < chords[1] else "descending"

for i in range(1, 8):
  result = "mixed" if (result == "ascending" and chords[i-1] > chords[i]) or (result == "descending" and chords[i-1] < chords[i]) else result

print(result)