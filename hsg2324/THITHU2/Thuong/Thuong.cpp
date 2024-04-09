#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

int tong(vi a, ll x) {
    ll s=0;
    for (int i=0; i<a.size(); i++) {
        if (a[i]==x) s+=a[i];
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fstream doc, ghi;
    doc.open("Thuong.inp", ios::in);
    ghi.open("Thuong.out", ios::out | ios::trunc);

    ll n,m,s=0;
    doc >> n >> m;
    vi a(n),b(m);

    for (int i=0; i<n; i++) doc>> a[i];
    for (int j=0; j<m; j++) doc >> b[j];

    a.erase(remove_if(a.begin(), a.end(), [&b](ll num){
        return find(b.begin(), b.end(), num) != b.end();
    }), a.end());

    for (auto num:a) ghi << num << " ";

    sort(a.begin(),a.end());

    for (int i=0; i<a.size(); i++) {
        if (tong(a,a[i])>s) s=tong(a,a[i]);
    }

    ghi << endl << s;

    doc.close();
    ghi.close();

    return 0;
}

