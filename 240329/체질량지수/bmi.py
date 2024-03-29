a=input().split()
h=int(a[0])
w=int(a[1])

b=(10000*w)//(h*h)

if b>=25:
    print(f"{b}")
    print("Obesity")
    exit()

print(f"{b}")