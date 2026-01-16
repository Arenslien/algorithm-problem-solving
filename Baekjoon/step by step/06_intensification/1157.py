# 1157: 단어 공부

# # 1. 알파벳 카운팅 딕셔너리
# alphabet_dict = {
#   chr(i+97): 0 for i in range(26)
# }

# # 2. 입력 --> 소문자 변환
# word = input().lower()

# # 3. 알파벳 카운팅
# for alphabet in word:
#   alphabet_dict[alphabet] += 1

# # 4. 반복
# max = 0 # 최대값
# cnt = 0 # 가장 많은 빈도 수 중복 체크를 위한
# max_key = ""

# for key in alphabet_dict.keys():
#   if alphabet_dict[key] > max:
#     max = alphabet_dict[key]
#     max_key = key
#     cnt = 1
#   elif alphabet_dict[key] == max:
#     cnt += 1

# if cnt == 1: print(max_key.upper())
# else: print("?")

# 1. 입력 받기
word = input().upper()
count = {}

for char in word:
  count[char] = count.get(char, 0) + 1

max_freq = max(count.values())
most_common = [key for key, value in count.items() if value == max_freq]

print(most_common[0] if len(most_common) == 1 else "?")