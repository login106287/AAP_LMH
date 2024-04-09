#include <bits/stdc++.h>
using namespace std;

void isStrongNumber(long long n) {
    long long finalS=0,du,s,a=n;
    while (n!=0) {
        long long s=1;
        du = n%10;
        for(long long i=1; i<=du; i++) {
            s*=i;
        }
        finalS+=s;
        n/=10;
    }
    if (finalS==a) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    isStrongNumber(n);
    return 0;
}
