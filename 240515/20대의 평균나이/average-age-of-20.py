from decimal import Decimal

Sum = 0
count = 0

while True:
    n = int(input())
    if n > 29 or n < 20:
        Sum += n
        count += 1
        break
    Sum += n
    count += 1

print(Decimal(Sum / count).quantize(Decimal('0.00')))