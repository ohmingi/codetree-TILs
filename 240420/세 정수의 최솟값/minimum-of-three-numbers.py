arr=input().split()
a=int(arr[0])
b=int(arr[1])
c=int(arr[2])

Min=a
if b<=a or b<=c:
    Min=b

if c<=a or c<=b:
    Min=c

print(Min)