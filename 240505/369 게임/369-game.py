a=int(input())

for i in range(1,a+1):
    s=str(i)

    if i%3==0:
        print(0, end = " ")
        continue
    else:
        b = False
        for t in range(len(s)):
            if s[t]=='3' or s[t]=='6' or s[t]=='9':
                print(0, end=" ")
                b=true
                break
        if b==False:
            print(i, end=" ")