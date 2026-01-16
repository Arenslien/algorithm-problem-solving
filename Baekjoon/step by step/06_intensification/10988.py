# 10988: 팰린드롬인지 확인하기

word = input()

if (len(word)%2 == 0):
  print(int(word[:int(len(word)/2)] == word[::-1][:int(len(word)/2)]))
else:
  print(int( word[:int(len(word)/2)] == word[::-1][:int(len(word)/2)] ))