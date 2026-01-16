# 2475: 검증수

numbers = map(int, input().split())

number_sum = 0
for number in numbers:
  number_sum += number * number

print(number_sum % 10)