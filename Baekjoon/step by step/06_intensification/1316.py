# 1316: 그룹 단어 체커

# 1. N 입력
N = int(input())
group_cnt = 0

for i in range(N):
  # 2. 단어 입력
  word = input()

  # 3. 단어 체크
  check_dict = {}
  is_group = True
  for i in range(len(word)):
    # 3.2 비연속 중복 입력인 경우
    if (check_dict.get(word[i], False) and word[i] != word[i-1]):
      is_group = False
      break

    check_dict[word[i]] = True
  
  group_cnt += 1 if is_group else 0

print(group_cnt)
