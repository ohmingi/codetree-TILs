n=int(input())

a=0

for i in range(1,101):
    a+=i
    if a>=n:
        print(i)
        break