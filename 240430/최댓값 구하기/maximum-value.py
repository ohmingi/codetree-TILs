arr=input().split()
a,b,c=int(arr[0]),int(arr[1]),int(arr[2])

m=a

if m<b:
    m=b

if m<c:
    m=c

print(m)