arr=input().split()
a=int(arr[0])
b=string(arr[1])

arr1=input().split()
a1,b1=int(arr1[0]),string(arr1[1])

if (a>=19 or a1>=19) and (b=='M' or b1=='M'):
    print(1)
else:
    print(0)