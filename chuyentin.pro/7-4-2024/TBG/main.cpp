#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define fi first
#define se second
#define FOR(i,a,b,c) for (ll i=a; i<b; i+=c)
#define FOD(i,a,b,c) for (ll i=a; i>b; i-=c)
#define endl "\n"
using namespace std;

ll x,y,z;

bool check(ll n) {
    ll s=n*y;
    FOR(i,1,z+1,1) {
        s=s+y-x;
        if (s<0) return 0;
    }
    return 1;
}

ll binarySearch(ll l, ll r) {
    ll k=0, m;
    while (l<=r) {
        m=(l+r)/2;
        if (check(m)) {
            k=m;
            r=m-1;
        }
        else {
            l=m+1;
        }
    }
    return k;
}

void solve() {
    ll result = binarySearch(0,z*x/y+1);
    cout << result << endl;
}

main() {
    cin.tie(0)->sync_with_stdio(false);

    cin >> x >> y >> z;

    solve();

    return 0;
}
