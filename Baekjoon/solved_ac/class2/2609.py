# 2609: 최대공약수와 최소공배수

def gcd(a, b):
  while (b != 0):
    temp = b
    b = a % b
    a = temp

  return a

num1, num2 = list(map(int, input().split()))

GCD = gcd(num1, num2)
LCM = num1 * num2 // GCD

print(f"{GCD}\n{LCM}")