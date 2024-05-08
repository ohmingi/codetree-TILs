a,b=list(map(int, input().split()))

cnt,s=0,0

for i in range(a,b+1):
    if i%5==0 or i%7==0:
        s+=i
        cnt+=1

aver=s/cnt

print(f"{s} {aver:.1f}")