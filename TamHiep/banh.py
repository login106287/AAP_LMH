n,m=map(int,input().split()) 
ans=0  ; banh=n 
if n<=0 or m<=0: ans=0 
elif n%m == 0 : ans=0 
else:
    if n>m: banh-=m 
    du=0 ; cat=banh/m*100
    for i in range (banh): 
        mbanh = 100
        if cat > 180 :
            cat -= 180
        ans+=1
        du += 100 - cat
        if du == cat : du =0 
        if du > cat : ans += 1 ; du -= cat
print(ans) h