a,b=list(map(int, input().split()))
a1=2

for i in range(a,b+1):
    if a>b:
        break
    print(a, end=" ")

    if a%2!=0:
        a*=2
    else:
        a+=3