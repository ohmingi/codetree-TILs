a,b=list(map(int, input().split()))

for i in range(a,b+1):
    print(i)
    if i%2!=0:
        i*=2
    else:
        i+=3