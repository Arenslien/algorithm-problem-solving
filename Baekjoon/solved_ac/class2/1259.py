# 1259: 팰린드롬수

while (True): 
  num = input()
  
  if (num == "0"): break

  print("yes" if num == num[::-1] else "no")