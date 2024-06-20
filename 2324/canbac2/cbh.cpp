#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long>

void sang(long long &n, vi &v){
    bool check[n+1];
    for (long long i=2; i<=n; i++) check[i]=1;
    for (long long i=2; i<=n; i++) {
        if (check[i]==true) {
            for (long long j=2*i; j<=n; j+=i) {
                check[j]=0;
            }
        }
    }
    for (long long i=2; i<=n; i++) {
        if (check[i]) v.push_back(i);
    }
}

int main()
{
    long long n;
    cin >> n;
    vi v;
    sang(n,v);
    for (auto x:v) {
        if (n%x==0) {
            double d = sqrt(n/x);
            if (d==int(d)) cout << d << ' ' << x;
        }
    }

    return 0;
}
