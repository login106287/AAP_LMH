#include <bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define FOR(i,a,b,c) for (ll i=a, _b=(b); i<b; i+=c)
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;


int main()
{
    cin.tie(0)->sync_with_stdio(false);
    ll x,M,N,d=0,counts=0,result=0;
    cin >> M >> N;
    vi a(N),b(N);

    FOR(i,0,N,1) {
        cin >> x;
        a.push_back(x);
        b.push_back(x);
        d+=x;
    }

    ll h=d-M;

    while(h>=0) {
        FOR(i,0,N,1) {
            if (a[i]>0) {
                a[i]--;
                h--;
            }
        }
        if (h<0) break;
    }

    FOR(i,0,N,1) {
        result+=(b[i]-a[i])*(b[i]-a[i]);
    }
    cout << result;

}
