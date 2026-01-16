# 4153: 직각삼각형

while (True):
  a, b, c = list(map(int, input().split()))

  if (a*b*c == 0): break

  if (a*a + b*b == c*c or
      a*a + c*c == b*b or
      b*b + c*c == a*a): print("right")
  else: print("wrong")