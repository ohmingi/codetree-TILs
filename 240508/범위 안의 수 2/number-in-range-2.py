Sum,avr,cnt=0,0,0

for i in range(10):
    a=int(input())

    if a>=0 and a<=200:
        Sum+=a
        cnt+=1

avr=Sum/cnt

print(f"{Sum} {avr:.1f}")