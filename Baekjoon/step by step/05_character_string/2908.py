# 1. 두 수 A, B를 입력
A, B = input().split()
a, b = "", ""

# 2. 두 수를 거꾸로 뒤집기
for i in range(3):
  a += A[2-i]
  b += B[2-i]

# 3. 두 수 비교 후 결과 출력
if int(a) > int(b): print(a)
else: print(b)


# # 입력 예시: 734 893
# A, B = "734", "893"

# # 문자열 뒤집기
# A[::-1]  # "437"
# B[::-1]  # "398"

# # 정수 비교 후 큰 값 출력
# print(max("437", "398", key=int))