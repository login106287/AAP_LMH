#include <bits/stdc++.h>
using namespace std;
#define ll long long

int counts(ll l, ll r) {
    bool p[r-l+1];
    int counts=0;
    memset(p,true,sizeof(p));
    for (ll i=2; i<=sqrt(r); i++) {
        for (ll j=max(i*i,(l+i-1)/i*i);j<=r;j+=i) {
            p[j-l] = false;
        }
    }
    if (l==1) p[0] = false;
    for (ll i=0; i<=r-1;i++) {
        if (p[i]) counts++;
    }
    return counts;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //fstream doc, ghi;

    //doc.open("sprimecount.inp", ios::in);
    //ghi.open("sprimecount.out", ios::out || ios::trunc);

    int t;
    ll l, r;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> l >> r;
        cout << counts(l,r) << endl;
    }

    //doc.close;
    //ghi.close;

    return 0;
}
