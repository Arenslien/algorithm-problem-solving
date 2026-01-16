# 15829: Hashing

M = 1234567891
r = 1

L = int(input())
str1 = input()
hash = 0

for i in range(L):
  hash = (hash + (ord(str1[i])-ord('a')+1) * r) % M
  r = (r * 31) % M

print(hash)