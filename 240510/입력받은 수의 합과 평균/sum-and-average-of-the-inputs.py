n=int(input())

a=[]

for i in range(n):
    a.append(int(input()))

print(f"{sum(a)} {(sum(a)/len(a)):.1f}")