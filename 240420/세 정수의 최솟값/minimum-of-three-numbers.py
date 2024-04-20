arr=input().split()
a=int(arr[0])
b=int(arr[1])
c=int(arr[2])

Min=a
if b<a and b<c:
    Min=b

if c<a and c<b:
    Min=c

print(Min)