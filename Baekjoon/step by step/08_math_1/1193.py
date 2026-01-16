# 1193: 분수찾기

cnt = 0
i = 1
X = int(input()) # 수 입력

while cnt != X:
  for j in range(i):
    cnt += 1
    
    numerator = j + 1 if i%2 == 0 else i-j
    denominator = i - j if i%2 == 0 else j+1

    if cnt == X: 
      print(f"{numerator}/{denominator}")
      break

  i += 1
