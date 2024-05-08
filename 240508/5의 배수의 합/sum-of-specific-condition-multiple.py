a,b=list(map(int, input().split()))

if a>b:
    a,b=b,a

cnt = 0

for i in range(a,b+1):
    if i%5==0:
        cnt+=1

print(cnt)