#include <bits/stdc++.h>
using namespace std;
#define ll long long

fstream doc, ghi;

ll solve(vector<ll>& A, ll k) {
    ll n = A.size();
    vector<ll> s(n+1,0);
    for (ll i=0; i<n; i++) s[i+1]=(s[i]+A[i])%k;

    unordered_map<ll, ll> m;
    ll maxl = 0;
    for (ll i = 0; i <= n; i++) {
        if (m.count(s[i])) maxl=max(maxl, i - m[s[i]]);
        else m[s[i]]=i;
    }

    return maxl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    doc.open("daydainhat.inp", ios::in);
    ghi.open("daydainhat.out", ios::out | ios::trunc);

    ll n,k;
    doc >> n >> k;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) doc >> a[i];
    ghi << solve(a,k);

    doc.close();
    ghi.close();
    return 0;
}
