#include <stdio.h>
#include <math.h>

int fib[9];

int fibo(int n) {
    if(n==1 || n==2) return 1;
    if(fib[n]) return fib[n];
    fib[n] = fibo(n-1) +fibo(n-2);
    return fib[n];
}

int checkNt(int n) {
    if( (n>2 && n%2==0) || n<2) return 0;
    int i;
    for(i=3; i<=sqrt(n); ++i) {
        if(n%i==0) return 0;
    }
    return 1;
}

int main() {
    fib[1]=1;
    fib[2]=1;
    fibo(9);
    int a, b, max, min, i, j;
    scanf("%d %d",&a,&b);
    max = a<b?b:a;
    min = a<b?a:b;
    for(i=min; i<=max; i++) {
        int sum=0;
        int temp = i;
        if(checkNt(temp)) {
            while(temp>0) {
                sum+=(temp%10);
                temp /= 10;
            }
            for(j=1; j<10; ++j) {
                if(sum==fib[j]) {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
    return 0;
}
