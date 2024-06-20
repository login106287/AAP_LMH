#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fstream doc, ghi;
    doc.open("noinhanh.inp", ios::in);
    ghi.open("noinhanh.out", ios::out | ios::trunc);

    ll n;
    doc >> n;
    ll a[n+1], s[n+1];
    for (ll i=1; i<=n; i++) doc >> a[i];
    s[0]=0;

    for (ll i=1; i<=n; i++) {
        s[i]=s[i-1]+a[i];
        ghi << s[i] << " ";
    }

    doc.close();
    ghi.close();

    return 0;
}
