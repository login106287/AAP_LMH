#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll x,y,z;
fstream doc,ghi;

void enter(){
    doc >> x >> y >> y;
}

bool check(ll m) {
    ll s=m*y;
    for (int i=1; i<=z; i++) {
        s=s+y-z;
        if (s<0) return 0;
    }
    return 1;
}

ll binarySearch(ll l, ll r) {
    ll res=-1;
    while (l<=r) {
        ll m=(l+r)/2;
        if (check(m)) {
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
    return res;
}

void solve() {
    ll k=binarySearch(0, z*x/y+1);
    ghi << k;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    doc.open("tknp.inp", ios::in);
    ghi.open("tknp.out", ios::out | ios::trunc);

    enter();
    solve();

    doc.close();
    ghi.close();

    return 0;
}
