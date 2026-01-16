# 1406: 에디터

st_left = []
st_right = []

for c in input(): st_left.append(c)

M = int(input())

for _ in range(M):
  cmd = input()

  if (cmd == 'L' and len(st_left) > 0):
    st_right.append(st_left.pop())
  elif (cmd == 'D' and len(st_right) > 0):
    st_left.append(st_right.pop())
  elif (cmd == 'B' and len(st_left) > 0):
    st_left.pop()
  elif len(cmd.split()) == 2:
    _, key = cmd.split()
    st_left.append(key)

while (len(st_left) != 0): st_right.append(st_left.pop())

while(len(st_right) != 0): print(st_right.pop(), end="")
