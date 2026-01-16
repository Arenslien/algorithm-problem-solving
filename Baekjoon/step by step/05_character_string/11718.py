# 11718: 그대로 출력하기

# while True:
#   try:
#     a = input()
#     print(a)

#   except:
#     break

import sys
for line in sys.stdin:
  print(line, end="")