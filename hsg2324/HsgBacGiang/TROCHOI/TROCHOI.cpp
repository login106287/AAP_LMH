#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

void solve(vi &a, vi &b, ll n) {
    ll minx=10000000, s;
    for (ll i=0; i<n; i++) {
        for (ll j=0; j<n; j++) {
            s = abs(a[i]+b[j]);
            minx = min(s,minx);
        }
    }
    cout << minx;
}

int main()
{
    ll n, minx=10e9;
    cin >> n;
    vi a(n),b(n);
    for (ll i=0; i<n; i++) cin >> a[i];
    for (ll j=0; j<n; j++) cin >> b[j];

    solve(a,b, n);

    return 0;
}
