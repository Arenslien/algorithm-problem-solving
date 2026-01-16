# 2745: 진법 변환

base_10_N = 0 # 10진수 결과 값

# 진법에 해당되는 수 dictionary
numeric_system_dict = { chr(i+65): i+10 for i in range(26) }

# 초기값 입력
N, base_N = input().split()

for i in range(len(N)):
  digit_value = numeric_system_dict[N[i]] if N[i] in numeric_system_dict else int(N[i])
  base_10_N += int(base_N) ** (len(N)-i-1) * digit_value # 진법 수^(N 번째 자리 수 - 1) * 해당 자리 수

# 최종 결과 출력
print(base_10_N)
