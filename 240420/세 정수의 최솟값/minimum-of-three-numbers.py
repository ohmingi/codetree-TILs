arr=input().split()
a=int(arr[0])
b=int(arr[1])
c=int(arr[2])

Min=a

if b<=Min:
    Min=b

if c<=Min:
    Min=c

print(Min)