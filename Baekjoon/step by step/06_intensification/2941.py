# 2941: 크로아티아 알파벳

# croatia_alphabet_list = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

# word = input()

# count = 0
# skip_index = -1

# for i in range(len(word)):
#   if i <= skip_index:
#     continue
#   else:
#     skip_index = -1

#   for croatia_alphabet in croatia_alphabet_list:
#     if word[i] == croatia_alphabet[0] and i + len(croatia_alphabet)-1 <= len(word)-1:
#       if word[i:i+len(croatia_alphabet)] == croatia_alphabet:
#         count += 1
#         skip_index = i + len(croatia_alphabet) - 1
#         break
  
#   if skip_index == -1: count += 1

# print(count)


croatia_alphabet_list = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
count = 0

word = input()

for croatia_alphabet in croatia_alphabet_list:
  word = word.replace(croatia_alphabet, "*")

print(len(word))
