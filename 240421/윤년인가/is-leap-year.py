a=int(input())

if a%4==0:
    print("true")
elif a%100==0 and a%400!=0:
    print("true")
else:
    print("false")