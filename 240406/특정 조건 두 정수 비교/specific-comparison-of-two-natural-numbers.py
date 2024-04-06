arr=input().split()
a=int(arr[0])
b=int(arr[1])

if a>b:
    print(0, end=" ")
elif a<b:
    print(1, end=" ")


if a==b:
    print(1)
else:
    print(0)