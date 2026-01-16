# 1267: 핸드폰 요금

Y = 0
M = 0
N = int(input())

time_list = list(map(int, input().split()))

for time in time_list:
  Y += 10 + time//30 * 10
  M += 15 + time//60 * 15

if (Y < M): print("Y", Y)
elif (Y > M): print("M", M) 
else: print("Y M", Y) 