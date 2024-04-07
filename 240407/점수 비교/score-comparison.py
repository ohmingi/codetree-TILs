a=input().split()
b=input().split()

a[0]=int(a[0])
a[1]=int(a[1])
b[0]=int(b[0])
b[1]=int(b[1])

if a[0]>b[0] and a[1]>b[1]:
    print(1)
else:
    print(0)