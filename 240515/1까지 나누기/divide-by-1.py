n=int(input())

count = 0
div = 1

while(n>1):
    n//=div
    div+=1
    count+=1

print(count)