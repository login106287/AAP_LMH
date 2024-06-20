#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

ll tong(ll l, ll r, vi a) {
    ll s=0;
    for (ll i=l; i<=r; i++) {
        s+=a[i];
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    fstream doc,ghi;
    doc.open("Doanhthu.inp", ios::in);
    ghi.open("Doanhthu.out", ios::out | ios::trunc);

    ll n, v, counts=0;
    doc >> n >> v;
    vi a(n);

    for (ll i=0; i<n; i++) doc >> a[i];

    for (ll i=0; i<n; i++) {
        for (ll j=i+1; j<n; j++) {
            ll tmp = tong(i,j,a);
            if (tmp>=v) {
                //cout << i << ' ' << j << endl;
                counts++;
            }
        }
    }
    ghi << counts;

    doc.close();
    ghi.close();

    return 0;
}
