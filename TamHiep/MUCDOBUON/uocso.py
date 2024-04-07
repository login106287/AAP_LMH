m=int(input()) 
s=1
for i in range (m):
    p,k=map(int,input().split()) 
    s*=(p**k)
a=[] 
for i in range (3):
    data=list(map(int,input().split())) 
    a.append(data)  

for i in range (3):
    dem=0 
    for j in range (a[i][0],a[i][1]+1):
        if s%j==0:
            dem+=1 
    print(dem) 