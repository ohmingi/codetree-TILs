Sum=0

count = 0

while(True):
    n=int(input())
    if n>29 or n<20:
        break
    Sum+=n
    count+=1

print(f"{Sum/count:.2f}")