n=int(input())

for i in range(1,n+1):
    
    if i%2==0 or (i%3==0 and i%9!=0):
        continue
    
    i=str(i)

    if i[len(i)-1]=='5':
        continue
    
    print(i,end=" ")