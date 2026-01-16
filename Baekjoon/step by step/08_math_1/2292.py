# 2292: 벌집

N = int(input())

i = 1
current_room = 1

while (current_room < N):
  current_room += 6 * i
  i += 1

print(i)