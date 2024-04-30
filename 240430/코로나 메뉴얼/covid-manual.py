arr = input().split()
a = int(arr[1])

A,B,C=0,0,0

if arr[0]=='Y':
    if a>=37:
        A+=1
    else:
        C+=1
else:
    if a>=37:
        B+=1
    else:
        D+=1

arr1 = input().split()
a1 = int(arr1[1])

if arr1[0]=='Y':
    if a1>=37:
        A+=1
    else:
        C+=1
else:
    if a1>=37:
        B+=1
    else:
        D+=1


arr2 = input().split()
a2= int(arr2[1])

if arr2[0]=='Y':
    if a2>=37:
        A+=1
    else:
        C+=1
else:
    if a2>=37:
        B+=1
    else:
        D+=1

if A>=2:
    print('E')
else:
    print('N')