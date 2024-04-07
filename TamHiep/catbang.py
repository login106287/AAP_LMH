m,n=map(int,input().split()) 
a=[]
for i in range (n):
    x=int(input())
    a.append(x)
b=a 
h=m-(sum(a)) 
while True:
    if h>0:
        for i in range (n):
            if b[i]>0: b[i]-=1 ; h-=1
    else:
        break 
result=0 
for i in range (n):
    result+=(b[i]-a[i])*(b[i]-a[i]) 
print(result) 