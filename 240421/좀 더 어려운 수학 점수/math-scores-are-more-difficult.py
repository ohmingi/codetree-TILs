arr=input().split()
ar=input().split()
a,b = int(arr[0]),int(arr[1])
a1,b1=int(ar[0]),int(ar[1])

if a>a1:
    print('A')
elif a<a1:
    print('B')
elif b>b1:
    print('A')
else:
    print('B')