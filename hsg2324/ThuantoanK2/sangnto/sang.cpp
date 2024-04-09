#include <bits/stdc++.h>
using namespace std;

long long _sievesize;
bitset<10000010> bs;
vector<int> p;

void sieve(long long upperbound){
    _sievesize=upperbound+1;
    bs.set();
    bs[0]=bs[1]=0;
    for(long long i=2;i<_sievesize;i++) if(bs[i]) {
        for(long long j=i*i;j< _sievesize;j+=i) bs[j]=0;
        p.push_back(i);
    }
}

bool isPrime(long long n){
    if(n<_sievesize) return bs[n];
    for(int i=0;i<p.size(),p[i]*p[i]<=n;i++)
        if(n%p[i]==0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    sieve(1000);


    for (auto x:p) cout << x << ' ';
    return 0;
}
