# 11005: 진법 변환 2

digit_dict = { i+10: chr(i+65) for i in range(26) }
base_B = ""

# 1. 입력 받기
N, B = list(map(int, input().split()))

# 2. base_N 진법으로 변환
while (N > 0):
    base_B = (digit_dict[N%B] if N%B >= 10 else str(N%B)) + base_B
    N //= B

print(base_B)