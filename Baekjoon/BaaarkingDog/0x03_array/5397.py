# 5397: 키로거

N = int(input())

for _ in range(N):
  input_log = input()

  st_left = []
  st_right = []

  for key in input_log:
    if (key == '<'):
      if (len(st_left) > 0): st_right.append(st_left.pop())
    elif (key == '>'):
      if (len(st_right) > 0): st_left.append(st_right.pop())
    elif (key == '-'):
      if (len(st_left) != 0): st_left.pop()
    else: st_left.append(key)
  
  while (len(st_left) > 0): st_right.append(st_left.pop())
  while (len(st_right) > 0): print(st_right.pop(), end="")
  print()
